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
