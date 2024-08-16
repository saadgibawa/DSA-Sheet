//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int gcd(long long a, long long b){
      if(b==0){
          return a;
      }else{
          return gcd(b,a%b);
      }
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>res;
        // long long a = lcm(A,B);
        long long b = gcd(A,B);
        long long a = A*B/b;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends