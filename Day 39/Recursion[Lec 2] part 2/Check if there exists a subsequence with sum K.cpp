bool subsetrec(vector<int>&nums,int i,int &sum,bool &s,int k)
{
    if(i>=nums.size())
    {
      if (sum == k) {
        return true;
      } 
      else {
        return false;
      }
    }
    if (sum <= k) {
        sum = sum + nums[i];
        if (subsetrec(nums, i + 1, sum, s, k) == true) {
            return true;
        }
        sum = sum - nums[i];
        if (subsetrec(nums, i + 1, sum, s, k) == true) {
            return true;
        }
    }
    return false;
}

bool isSubsetPresent(int n, int k, vector<int> &nums)
{
    int i=0;
    bool s=0;
    int sum=0;
    bool ans=subsetrec(nums,i,sum,s,k);
    return ans;

}