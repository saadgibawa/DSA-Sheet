class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        Node* curr=root;
        vector<int>s;
        while(curr){
            Node* down=curr;
            while(down){
                s.push_back(down->data);
                down=down->bottom;
            }
            curr=curr->next;
        }
        Node* dummy=new Node(-1);
        Node* head=dummy;
        sort(s.begin(),s.end());
        for(auto i : s){
            Node* temp=new Node(i);
            dummy->bottom=temp;
            dummy=dummy->bottom;
        }
        return head->bottom;
    }
};