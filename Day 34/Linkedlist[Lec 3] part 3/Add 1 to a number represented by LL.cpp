class Solution {
  public:
    int helper(Node* temp){
        if( temp ==NULL){
            return 1;
        }
        int carry = helper(temp->next);
        int sum = temp->data + carry;
        temp->data= sum;
        if(temp->data<10){
            return 0;
        }
        else{
            temp->data=0;
            return 1;
        }
        
    }
    void func(Node* &head){
        int x = helper(head);
        if(x==1){
            Node* nn = new Node(1);
            nn->data = 1;
            nn->next = head;
            head = nn;
        }
    }
    Node* addOne(Node* head) {
        
        func(head);
        return head;
    }
};