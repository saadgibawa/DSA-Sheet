class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node*newnode = new Node(x);
        Node*temp = head;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            while(temp->next !=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            
            
        }
        return head;
    }
};