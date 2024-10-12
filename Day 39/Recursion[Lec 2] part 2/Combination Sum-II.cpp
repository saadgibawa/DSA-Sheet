class Solution {
public:
    vector<vector<int>> a;
    void h(vector<int>& v, int i, int t, vector<int>& c) {
        if (t == 0) {
            a.push_back(c);return;
        }
        if (t < 0 || i >= v.size()) return;
        c.push_back(v[i]);
        h(v, i + 1, t - v[i], c); 
        c.pop_back(); 
        int j = i + 1;
        while (j < v.size() && v[j] == v[i]) j++;
        h(v, j, t, c); 
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int t) {
        sort(v.begin(), v.end()); 
        vector<int> c;
        h(v, 0, t, c);
        return a;
    }
};