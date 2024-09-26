class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node *slow=head;
        Node *fast=head;
        
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==NULL||fast->next==NULL){
            return 0;
        }
        
        int count=1;
        slow=slow->next;
        
        while(slow!=fast){
            count++;
            slow=slow->next;
        }
        
        return count;
    }
};