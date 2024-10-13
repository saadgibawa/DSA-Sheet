class Solution {
public:
    vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> ans;
    fun(0, s, ans, res);
    return res;
}

void fun(int ind, string s, vector<string>& ans, vector<vector<string>>& res) {
    if (ind == s.size()) {
        res.push_back(ans);
        return;
    }
    for (int i = ind; i < s.size(); ++i) { // Corrected: i = ind instead of i = 0
        if (isvalid(s, ind, i)) {
            ans.push_back(s.substr(ind, i - ind + 1));
            fun(i + 1, s, ans, res); 
            ans.pop_back();
        }
    }
}

bool isvalid(string s, int start, int end) {
    while (start <= end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

};