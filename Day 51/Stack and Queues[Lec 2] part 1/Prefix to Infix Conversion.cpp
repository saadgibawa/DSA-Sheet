class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string>st;
        for(int i=pre_exp.size()-1;i>=0;i--){
            char ch = pre_exp[i];
            //if the char is operand then push in stack
            if(isalpha(ch))
            {
                st.push(string(1,ch));
            }
            //if the char is operator 
            else{
                string operand1 = st.top();st.pop();
                string operand2 = st.top();st.pop();
                //form a new expression with the operator
            string new_exp = "("+operand1+ch + operand2+")";
            st.push(new_exp);
            }
        }
        return st.top();
    }
    
};