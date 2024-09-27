class Solution{
public:
    void insertAtBottom(stack<int> &St, int num) {
        if (St.empty()) {
            St.push(num);
            return;
        }
    
        int temp = St.top();
        St.pop();
        insertAtBottom(St, num);
        St.push(temp);
    }

    void Reverse(stack<int> &St) {
        if (!St.empty()) {
            int num = St.top();
            St.pop();
            Reverse(St);
            insertAtBottom(St, num);
        }
        else return;
    }
};