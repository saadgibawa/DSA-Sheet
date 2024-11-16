class MyQueue {
public:
    stack<int> input, output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int popped_ele;
        if(output.empty() == false) {
            popped_ele = output.top();
            output.pop();
        }
        else {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
            popped_ele = output.top();
            output.pop();
        }
        return popped_ele;
    }
    
    int peek() {
        int top_element;
        if(output.empty() == false) {
            top_element = output.top();
            //output.pop();
        }
        else {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
            top_element = output.top();
            //output.pop();
        }
        return top_element;
    }
    
    bool empty() {
        return output.empty() && input.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */