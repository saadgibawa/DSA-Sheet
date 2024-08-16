//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int dup = N;
        int count = 0;
        while(N!=0){
            int lastdigit = N%10;
            N = N/10;
            if(lastdigit ==0){
                continue;
            }
            if (dup%lastdigit==0){
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends