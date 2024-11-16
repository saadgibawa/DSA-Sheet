void MyStack ::push(int x) {
    // Your Code
    top++;
    arr[top]=x;
    return;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if(top<0) return -1;
    else{
        int temp=arr[top];
        top--;
        return temp;
    }
}