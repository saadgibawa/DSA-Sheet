class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* head=*head_ref;
        Node* temp=head;
        if(head == nullptr)
            return;
        while(head->data == x)
        {
            head=head->next;
            head->prev=nullptr;
            free(temp);
            temp=head;
        }
        *head_ref=head;
        while(temp!=nullptr)
        {
            if(temp->data == x)
            {
                Node* prev=temp->prev;
                Node* front=temp->next;
                prev->next=front;
                if(front != nullptr)
                    front->prev=prev;
                free(temp);
                temp=front;
            }
            else
                temp=temp->next;
        }
    }
};