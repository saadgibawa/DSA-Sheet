class Solution {
public: 
// same as binary subarray sum==k
 

    int f(vector<int>&nums,int goal)
    {
        if(goal<0) 
        {
            return 0;
        }
        int l=0,r=0,sum=0,count=0;

        while(r<nums.size())
        {
            sum += nums[r]%2;
            while(sum>goal)
            {
                sum -= nums[l]%2;
                l++;
            }
            count += r-l+1;
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return f(nums,k) - f(nums,k-1);
    }
};