class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0,high = nums.size()-1;
        int mid =0;
        int index = nums.size();

        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(nums[mid]==target)return mid;
            else if(target<nums[mid])
            {
                index =mid;
                high = mid-1;
            
            }else{
                low =mid+1;
            }
        }
        return index;
    }
};