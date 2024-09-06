class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end()); 
        int fl =-1,cl = -1,r  = arr.size()-1, l =0 ;    
        while (r>=l && r>=0 && l<arr.size()){  
            int mid  = (r+l)/2; 
            if (arr[mid]==x) return{x,x}; 
            else if (arr[mid]>x){
                r = mid-1; 
                cl = arr[mid]; 
            }
            else {
                l = mid+1; 
                fl = arr[mid]; 
                
            }
        }
        return {fl,cl}; 
    }
};