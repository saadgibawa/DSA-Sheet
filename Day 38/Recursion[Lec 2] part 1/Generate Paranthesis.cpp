class Solution {
public:
    void solve(int l, int r, int n, vector<string>& ans, string temp) {
        if (l > n || r > n) {
            return;
        }
        if (l < r) {
            return;
        }

        if (l == r && r == n) {
            ans.push_back(temp);
            return;
        }
            temp += '(';
            solve(l + 1, r, n, ans, temp);
            temp.pop_back();

        // include )
            temp += ')';
            solve(l, r + 1, n, ans, temp);
        
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0, 0, n, ans, "");
        return ans;
    }
};