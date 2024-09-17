class Solution {
    // Function to count nodes of a linked list.
    public:
     int getCount(struct Node* head) {
        Node *curr=head;
        int count=0;
        while(curr!=NULL){
            curr=curr->next;
            count++;
            
        }
        return count;
    }
};