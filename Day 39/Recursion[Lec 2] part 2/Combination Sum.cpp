class Solution {
    void combine(vector<int>& candidates, vector<vector<int>> &ans, vector<int> &temp, int target, int ind){
        if(target < 0 || ind < 0) return;
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        // Include the current candidate
        target -= candidates[ind];
        temp.push_back(candidates[ind]);
        combine(candidates, ans, temp, target, ind);

        // Backtrack and try the next candidate
        target += candidates[ind];
        temp.pop_back();
        combine(candidates, ans, temp, target, ind - 1);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combine(candidates, ans, temp, target, candidates.size() - 1);
        return ans;
    }
};