class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>Leaders;
        Leaders.push_back(arr[n-1]);
        int start=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(arr[i-1]>=start){
                Leaders.insert(Leaders.begin(), arr[i-1]);
                start=arr[i-1];
            }
        }
        return Leaders;
    }
};
