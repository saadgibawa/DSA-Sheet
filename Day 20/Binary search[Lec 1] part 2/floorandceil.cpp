pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int start = -1;
    int end =n;
    while(end>start+1){
        long long mid = (start+end)/2;
        if(a[mid]==x) return{x,x};
        else if(a[mid] >= x) end = mid;
        else start = mid;
    }
    if(start == -1) return {-1,a[end]};
    if(end == n) return {a[start],-1};
    return {a[start],a[end]};
}