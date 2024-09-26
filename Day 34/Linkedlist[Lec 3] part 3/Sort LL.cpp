class Solution {
private:
ListNode* findmid(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head->next;  
    ListNode* temp = NULL;
    while(fast!= NULL && fast -> next != NULL){
        slow = slow-> next;
        fast = fast -> next-> next;
    }
    return slow;
}
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }
        if (list1->val > list2->val) {
            swap(list1, list2);
        }
        ListNode* head = list1;
        while (list1 != NULL && list2 != NULL) {
            ListNode* temp = NULL;
            while (list1 != NULL && list1->val <= list2->val) {
                temp = list1;
                list1 = list1->next;
            }
            temp->next = list2;
            swap(list1, list2);
        }
        return head;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* mid = findmid(head);
        ListNode* leftHead = head;
        ListNode* rightHead = mid -> next;
        mid->next = NULL;
        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);
        return mergeTwoLists(leftHead, rightHead);
    }
};