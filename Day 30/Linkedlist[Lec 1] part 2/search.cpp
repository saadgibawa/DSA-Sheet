class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->data == key){
                return 1;
            }
            temp = temp->next;
        }
    
        return 0;
    }
};