class Solution {
  public:
    void solve(vector<int>& v, int n, int sum,int i,vector<int>& ans){
        if(i==n){
            ans.push_back(sum);
            return;
        }
        solve(v,n,sum+v[i],i+1,ans);
        solve(v,n,sum,i+1,ans);
        
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        int sum=0;
        int i=0;
        vector<int> v2;
        solve(arr,n,sum,i,v2);
        return v2;
    }
};