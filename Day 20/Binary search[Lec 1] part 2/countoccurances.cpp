class Solution{
public:	
	int count(int arr[], int n, int target) {
        int left,right,mid,first,last;
        left=0, right=n-1, first=last=-1;
	    while(left<=right){
	        mid = left + (right-left)/2;
	        if(arr[mid]==target){
	            first=mid;
	            right=mid-1;
	        }
	        else if(arr[mid]>target)
	        right=mid-1;
	        else left=mid+1;
	    }
	    if(first==-1) return 0;
	    left=0,right=n-1; //re-assigning left and right values
	    while(left<=right){
	        mid = left + (right-left)/2;
	        if(arr[mid]==target){
	            last=mid;
	            left=mid+1;
	        }
	        else if(arr[mid]<target)
	        left=mid+1;
	        else right=mid-1;
	    }
	    return last-first+1;
	}
};