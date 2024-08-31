class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int,int> mpp; 
        int maxi = 0;
        int sum = 0; 
        for(int i = 0;i<n;i++) {
            sum += arr[i]; 
            if(sum == 0) {
                maxi = i + 1; 
            }
            else {
                if(mpp.find(sum) != mpp.end()) {
                    maxi = max(maxi, i - mpp[sum]); 
                }
                else {
                    mpp[sum] = i;
                }
            }   
        }
    
        return maxi; 
    }
};