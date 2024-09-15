class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > & arr) {
        // code here
        int row = arr.size() , col = arr[0].size(),res =-1;
        for(int i=0 ; i<col ;i++){
            for(int j=0 ;j<row ; j++){
                if(arr[j][i]==1){
                    res = j;
                    // System.out.println(arr[j][i]);
                    return res;
                }
            }
        }
        return res;
    }
};