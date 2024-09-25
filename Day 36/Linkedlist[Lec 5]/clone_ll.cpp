class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        Node* temp = head;
        while(temp) {
            Node* next = temp->next;
            temp->next = new Node(temp->val);
            temp->next->next = next;
            temp = next;
        }
        temp = head;
        while(temp) {
            if(temp->random)
                temp->next->random = temp->random->next;
            else
                temp->next->random = NULL;
            temp = temp->next->next;
        }
        temp = head->next;
        Node* curr = head;
        Node* ans = head->next;

        while(curr && temp) {
            if(curr->next)
                curr->next = curr->next->next;
            if(temp->next)
                temp->next = temp->next->next;
            curr = curr->next;
            temp = temp->next;
        }
        return ans;
    }
};