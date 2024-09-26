class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next == NULL)
        {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL )
        {
            if(fast->next->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            else{
                fast = fast->next;
            }
        }

        ListNode* head2 = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        ListNode* current = head2;
        ListNode* temp = NULL;

        while(current != NULL)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        ListNode* head1 = head;
               head2 = prev;

               while(head1 and head2)
               {
                if(head1->val != head2->val)
                {
                    return false;
                }
                head1 = head1->next;
                head2 = head2->next;
               }
               return true;
    }
};