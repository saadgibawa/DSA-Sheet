class Solution {
    bool breaking(string &s, unordered_set<string>& ust, int idx, vector<int> &dp){
        if(idx >= s.length()){
            return dp[idx] = true;
        }
        
        if(dp[idx] != -1) return dp[idx];
        if(ust.find(s) != ust.end()) return true;

        for(int i = 1; i <= s.length(); i++){
            string str = s.substr(idx, i);
            if((ust.find(str) != ust.end()) && (breaking(s, ust, idx + i, dp))){
                return dp[idx] = true;
            }
        }
        return dp[idx] = false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> ust;
        for(auto it : wordDict){
            ust.insert(it);
        }
        vector<int> dp(301, -1);
        return breaking(s, ust, 0, dp);
    }
};