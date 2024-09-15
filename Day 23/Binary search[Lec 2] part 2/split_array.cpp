class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left=0;
        int right=1000000001;
        while(left<right){
            int mid=(left+right)/2;
            int i=0;
            int count=0;
            while(i<nums.size()){
                if(count==k || nums[i]>mid){
                    left=mid+1;
                    break;
                }
                int sums=0;
                while(i<nums.size()){
                    sums+=nums[i];
                    if(sums>mid)
                        break;
                    else
                        i++;
                }
                count++;
            }
            if(i==nums.size())
                right=mid;
        }
        return right;
    }
};