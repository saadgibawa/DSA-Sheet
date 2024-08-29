class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int n = nums.size();

        // XOR all the elements:
        int xorr = 0;
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};