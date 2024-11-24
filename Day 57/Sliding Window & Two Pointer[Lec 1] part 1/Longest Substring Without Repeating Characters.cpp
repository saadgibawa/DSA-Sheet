class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0; 
        int r=0;  
        vector<int>abc(256,-1); 
        int ans=0; 
        while(r<s.length()) 
        {
            if(abc[s[r]]!=-1 && abc[s[r]]>=l) 
            {
                l=abc[s[r]]+1; 
            }
            ans=max(ans,r-l+1); 
            abc[s[r]]=r; 
            r++; 
        }
        return ans; 
    }
};