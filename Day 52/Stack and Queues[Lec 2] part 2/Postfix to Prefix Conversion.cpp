class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        stack<string>s;
        for(char ch:post_exp){
            if(isalpha(ch)){
                s.push(string(1,ch));
            }
            else{
                string operand2 = s.top(); s.pop();
                string operand1 = s.top(); s.pop();
                
                string new_exp = ch + operand1 + operand2;
                s.push(new_exp);
            }
        }
        return s.top();
    }
};

