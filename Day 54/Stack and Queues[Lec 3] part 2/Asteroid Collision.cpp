class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroid) {
      stack<int> st;
      int n=asteroid.size();  
      for(int i=0;i<n;i++){
        if(asteroid[i]>0)st.push(asteroid[i]);
        else{
            while(!st.empty() && st.top()<abs(asteroid[i]) && st.top()>0){
                st.pop();
            }
            if(st.empty() || st.top()<0){
                st.push(asteroid[i]);
            }
            else if(!st.empty() && st.top()==abs(asteroid[i])){
                st.pop();
            }

        }
      }
        int s = st.size();
        vector<int>result(s);
        int i = s-1;
        while(!st.empty())
        {
            result[i--] = st.top();
            st.pop();
        }
       return result;
    }
};