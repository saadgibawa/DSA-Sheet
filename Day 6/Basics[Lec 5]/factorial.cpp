//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long mult =1;
    long long i=1;
    vector<long long> vec;
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        mult = i*mult;
        if(mult > n) return vec;
        i++;
        vec.push_back(mult);
        return factorialNumbers(n);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends