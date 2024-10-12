class Solution{

	public:
	int mod = 1000000007;
    int solve(vector<int>& nums, vector<vector<int>>& dp, int sum, int i){
        if(sum == 0){
            return 1;
        }
        if(sum < 0){
            return 0;
        }
        if(i >= nums.size()){
            return 0;
        }
        if(dp[i][sum] != -1){
            return dp[i][sum];
        }
        return dp[i][sum] = (solve(nums, dp, sum, i+1)%mod+solve(nums, dp, sum-nums[i], i+1)%mod)%mod;
    }
    int perfectSum(int arr[], int n, int sum)
    {
        vector<int> nums(arr, arr+n);
        sort(nums.begin(), nums.end());
        vector<vector<int>> dp(n+1, vector<int>(sum+5, -1));
        return solve(nums, dp, sum, 0)%mod;
    }
	  
};