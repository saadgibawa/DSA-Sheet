class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string>st;
            for (int i = pre_exp.size() - 1; i >= 0; i--) {
            char ch = pre_exp[i];
            
            // If the character is an operand, push it onto the stack
            if (isalpha(ch)) {
                st.push(string(1, ch));
            }

            else{
                string operand1 = st.top(); st.pop();
                string operand2 = st.top(); st.pop();
                
                string new_exp = operand1 + operand2 + ch;
                st.push(new_exp);
            }
        }
        return st.top();
    }
};