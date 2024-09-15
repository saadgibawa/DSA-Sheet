class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp1;
        multimap<int,char,greater<int>>mpp2;

        for(int i = 0;i<s.length();i++){
            mpp1[s[i]]++;
        }
        for(auto it:mpp1){
            mpp2.insert({it.second,it.first});
        }

        string ans ="";
        for(auto it:mpp2){
            string s="";
            int a = it.first;
            while(a){
                s+=it.second;
                a--;
            }
            ans+=s;
        }
        return ans;
    }
};