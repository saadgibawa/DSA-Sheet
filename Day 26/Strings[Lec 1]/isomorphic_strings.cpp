class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char>m1;
        unordered_map<char,bool>m2;
        for(int i=0; i<s.size(); i++){
            char ans=s[i];
            char ans1=t[i];
            if(m1.find(ans)!=m1.end()){
                auto it=m1.find(ans);
                if(it->second!=ans1){
                    return false;
                }
            }
            else
            {
                if(m2.find(ans1)!=m2.end()){
                    return false;
                }
                else{
                    m1.insert({ans,ans1});
                    m2.insert({ans1,true});
                }
            }
        }
        return true;
    }
};
