/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddHead=head;
        if(!head || !(head->next) ){
            return head;
        }
        ListNode* evenHead=head->next;
        ListNode* itodd=oddHead;
        ListNode* iteven=evenHead;
        int flag=1;      
        while(iteven->next && itodd->next){
            if(flag){
                itodd->next=iteven->next;
                itodd=iteven->next;
                flag=0;
            }
            else{
                iteven->next=itodd->next;
                iteven=itodd->next;
                flag=1;
            }
        }
        iteven->next=NULL;
        itodd->next=NULL;
        itodd->next = evenHead;
        return head;
    }
};