void MyQueue:: push(int x)
{   QueueNode* newNode= new QueueNode(x);
        if(rear==nullptr){
           rear= newNode;
           front= newNode;
           
        }
        else{
            rear->next= newNode;
            rear= newNode;
           
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
       if(front==nullptr){
           return -1;
       }     
       else{
           int data= front->data;
           QueueNode* temp= front;
           front= front->next;
        //   delete(temp);
        //   return data;
        if(front==nullptr){
            rear= nullptr;
        }
        free(temp);
        return data;
           
       }
}