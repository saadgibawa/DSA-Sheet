
#include<bits/stdc++.h>
int Solution::solve(vector<int> &A, int B) {
    int xr=0;
    map<int,int> mpp;
    mpp[xr]++; //to add (0,1)
    int n= A.size();
    int count=0;
    for(int i=0;i<n;i++){
        xr = xr ^ A[i];
        int x= xr^B;
        count += mpp[x];
        mpp[xr]++;
    }
    return count;
}
