
class Solution {
public:
    string infixToPostfix(string s) {
        auto priority = [](char& c) {
            if (c == '^')
                return 3;
            if (c == '*' || c == '/')
                return 2;
            if (c == '+' || c == '-')
                return 1;
            return -1;
        };

        string ans = "";
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                (ch >= '0' && ch <= '9'))
                ans += ch;
            else if (ch == '(')
                st.push(ch);
            else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            } else {
                while (!st.empty() && priority(st.top()) >= priority(ch)) {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};