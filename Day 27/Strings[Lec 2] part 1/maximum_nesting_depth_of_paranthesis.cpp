class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, d = 0;
        for(auto ch: s){
            if(ch == '('){
                d++;
            }
            else if(ch == ')'){
                d--;
            }
            ans = max(ans, d);
        }
        return ans;
    }
};