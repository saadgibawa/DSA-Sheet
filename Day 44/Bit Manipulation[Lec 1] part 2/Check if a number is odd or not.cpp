class Solution {
  public:
    string oddEven(int n) {
        // code here
        return (n&1?"odd":"even");
    }
};