class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* temp=head;
        if(x==1)
        {
            temp->next->prev=NULL;
            temp=temp->next;
            return temp;
            
        }
        else
        {
            while(--x && temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node*tempy=temp->prev;
            if(temp->next!=NULL)
            {
               tempy->next=temp->next;
               temp->next->prev=temp->prev;
               temp->next=NULL;
               temp->prev=NULL;
             
            }
            else
            {
                tempy->next=NULL;
                
            }
        }
        return head;
    }
};