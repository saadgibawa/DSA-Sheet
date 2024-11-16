//Function to push an element x in a queue.
oid MyQueue :: push(int x)
{
        // Your Code

       // exit when rear reaches the end of the array
        if(rear == 100005) {
            return;
        }
        
        arr[rear] = x;
        rear++;
        
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code 

       // exit when front reaches or becomes more than rear
        if(front >= rear) {
            return -1;
        }
        
        int x = arr[front];
        front++;
        return x;
        
}