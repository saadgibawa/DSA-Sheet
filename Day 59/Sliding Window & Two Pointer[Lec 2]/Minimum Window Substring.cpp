class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hash(256, 0);
        int l = 0, r = 0, minLen = INT_MAX, sIndex = -1, cnt = 0;
        int m = s.size(), n = t.size();

        for(int i = 0; i < n; i++){
            hash[t[i]]++;
        }

        while(r < m){
            hash[s[r]]--;
            if(hash[s[r]] >= 0){
                cnt++;
            }

            while(cnt == n){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    sIndex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return minLen == INT_MAX ? "" : s.substr(sIndex, minLen);
    } 
};