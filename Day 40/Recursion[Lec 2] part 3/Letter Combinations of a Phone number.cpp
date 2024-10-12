class Solution {
public:
    vector<string> getLetters(const string& d) {
        vector<string> ans;
        for (auto x : d) {
            string s = "";
            if (x == '2') s += "abc";
            else if (x == '3') s += "def";
            else if (x == '4') s += "ghi";
            else if (x == '5') s += "jkl";
            else if (x == '6') s += "mno";
            else if (x == '7') s += "pqrs";
            else if (x == '8') s += "tuv";
            else if (x == '9') s += "wxyz";
            ans.push_back(s);
        }
        return ans;
    }

    void rec(vector<string>& ans, vector<string>& s, int ind, string t) {
        if (ind == s.size()) {
            ans.push_back(t);
            return;
        }
        
        for (char c : s[ind]) {
            rec(ans, s, ind + 1, t + c);
        }
    }

    vector<string> letterCombinations(const string& digits) {
        vector<string> s = getLetters(digits);
        vector<string> ans;

        if (s.empty()) return ans;

        rec(ans, s, 0, "");
        return ans;
    }
};