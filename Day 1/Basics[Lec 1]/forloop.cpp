#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t1=1;
        int t2=1;
        int nt=1;
        int n;
        cin>>n;
        for(int i=1;i<n-1;i++) 
        {
                nt=t1+t2;
                t1=t2;
                t2=nt;
        }
        cout<<nt;
        return 0;
}