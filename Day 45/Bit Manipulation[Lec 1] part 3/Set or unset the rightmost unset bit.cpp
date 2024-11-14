class Solution {
  public:
    int setBit(int n) {
        int ans=(n|(n+1));
        return ans;
    }
};