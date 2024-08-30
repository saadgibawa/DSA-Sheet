class Solution {
public:
    vector<int> rearrangeArray(vector<int>& A) {
        int n = A.size();
        vector<int> ans(n,0);
        int posIndex = 0, negIndex = 1;
        for(int i = 0;i<n;i++){
            if(A[i]<0){
                ans[negIndex] = A[i];
                negIndex+=2;
            }
            else{
                ans[posIndex] = A[i];
                posIndex+=2;
            }
        }
  
        return ans;
    }
};