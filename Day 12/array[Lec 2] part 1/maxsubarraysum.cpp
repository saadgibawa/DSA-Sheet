class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
        int maxi=INT_MIN;
        int n= arr.size();
        for(int i=0;i<n-1;i++){
            if((arr[i]+arr[i+1])>maxi){
                maxi=(arr[i]+arr[i+1]);
            }
        }
        return maxi;
    }
};
