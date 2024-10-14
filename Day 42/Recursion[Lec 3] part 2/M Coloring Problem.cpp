class Solution {
    vector<vector<int>> adj;
    vector<int> color, used;
    int m;
  public:
    bool dfs(int i){
        used[i]=1;
        vector<bool>temp(m, true);
        for(auto &x: adj[i]){
            if(color[x]>=0){
                temp[color[x]]=false;
            }
        }
        if(count(temp.begin(), temp.end(), true)==0){
            return false;
        }
        bool ans=true;
        for(int j=0; j<m; j++){
            if(temp[j]){
                color[i]=j;
                for(auto &x: adj[i]){
                    if(!used[x])
                        ans&= dfs(x);
                }
                color[i]=-1;
            }
        }
        return ans;
    }
    bool graphColoring(int v, vector<pair<int, int>>& edges, int m) {
        this->m=m;
        adj=vector<vector<int>>(v);
        used=vector<int> (v, 0);
        for(auto &x: edges){
            adj[x.first].push_back(x.second);
            adj[x.second].push_back(x.first);
        }
        bool ans=true;
        for(int i=0; i<v; i++){
            if(!used[i]){
                color=vector<int> (v, -1);
                ans&= dfs(i);
            }
        }
        return ans;
        
    }
};