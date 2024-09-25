class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node *temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            Node *curr=temp->next;
            while(curr!=NULL && curr->data==temp->data)
            {
                Node *del=curr;
                curr=curr->next;
                free(del);
            }
            temp->next=curr;
            if(curr!=NULL)
            curr->prev=temp;
            temp=temp->next;
        }
        return head;
    }
};