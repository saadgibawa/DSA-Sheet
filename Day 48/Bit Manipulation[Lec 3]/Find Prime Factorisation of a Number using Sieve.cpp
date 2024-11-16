class Solution {
  public:
    void sieve() {}

    vector<int> findPrimeFactors(int n) {

        // Write your code here
        vector<int> ans(n+1);
        
        for(int i=2; i<n+1; i++){
            ans[i]=i;
        }
        
        for(int i=2; i*i<n+1; i++){
            if(ans[i]==i){
                for(int j=i*i; j<n+1; j+=i){
                    if(ans[j]=j){
                        ans[j]=i;
                    }
                }
            }
        }
        
        vector<int> result;
        while(n!=1){
            result.push_back(ans[n]);
            n=n/ans[n];
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};