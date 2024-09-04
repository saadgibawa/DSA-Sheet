class Solution {
public:
    int missingNumber(vector<int>& nums){
        int N = nums.size();
        int sum = (N * (N + 1)) / 2;
        int s2 = 0;
        for (int i = 0; i < N ; i++) {
            s2 += nums[i];
        }

        int missingNum = sum - s2;
        return missingNum;
    }
};        
