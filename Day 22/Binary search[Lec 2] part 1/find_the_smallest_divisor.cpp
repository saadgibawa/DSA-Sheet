class Solution {
public:
    int sumD(vector<int>& arr, int div){
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)arr[i]/(double)div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int thres) {
        int n=arr.size();
        if(n>thres) return -1;
        int low=1,high=*max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sumD(arr,mid) <= thres){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return low;
    }
};