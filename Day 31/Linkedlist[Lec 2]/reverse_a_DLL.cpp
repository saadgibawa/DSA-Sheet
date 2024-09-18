class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head == NULL || head->next == NULL){
            return head;
        }
        DLLNode*prev=NULL;
        DLLNode*cur=head;
        while(cur != NULL){
            prev=cur->prev;
            cur->prev=cur->next;
            cur->next=prev;
            cur=cur->prev;
        }
        return prev->prev;
    }
};