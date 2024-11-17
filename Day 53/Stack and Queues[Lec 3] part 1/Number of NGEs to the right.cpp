class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        vector<int> ans(queries,0);
        for(int i=0;i<queries;i++){
            int cnt=0;
            for(int j=indices[i]+1;j<n;j++){
                if(arr[j]>arr[indices[i]]){ cnt++; }
            }
            ans[i]=cnt;
        }
        return ans;
    }
};