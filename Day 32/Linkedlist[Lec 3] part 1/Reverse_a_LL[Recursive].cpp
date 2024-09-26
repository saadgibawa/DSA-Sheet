class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;

        ListNode* new_node = reverseList(head->next);
        ListNode* after = head->next;
        after->next = head;
        head->next = NULL;
        return new_node;
    }
};