class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 0, ans = 0;
        long curr = 0;

        for(int r = 0; r < n; r++){
            long t = nums[r];
            curr += t;

            while((r-l+1)*t - curr > k){
                curr -= nums[l];
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};