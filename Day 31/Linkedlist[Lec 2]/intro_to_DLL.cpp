class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(-1);
        Node* temp = head;
        
        for(int i : arr) {
            Node* tempLoop = new Node(i);
            temp -> next = tempLoop;
            tempLoop -> prev = temp;
            temp = tempLoop;
        }
        
        head -> next -> prev = nullptr;
        return head -> next;
    }
};