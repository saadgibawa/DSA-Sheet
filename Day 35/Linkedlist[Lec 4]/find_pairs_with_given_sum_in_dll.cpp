class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> ans;
        Node *front = head;
        Node *back = head;
        
        while(back->next) back = back->next;
        
        while(front->data < back->data){
            
            int sum = front->data + back->data;
            
            if(sum == target){
                ans.push_back({front->data, back->data});
                front = front->next;
                back = back->prev;
            }
            
            else if(sum > target){
                back = back->prev;
            }
            else{
                front = front->next;
            }
            
        }
        
        return ans;
    }
};