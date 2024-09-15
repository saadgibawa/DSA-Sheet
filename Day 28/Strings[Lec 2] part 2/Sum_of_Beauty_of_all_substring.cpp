class Solution {
public:
    int beauty(const std::vector<int> &mapy) {
        int mf = INT_MIN; // max frequency
        int lf = INT_MAX; // min frequency (excluding zeros)
        
        for(int i = 0; i < 26; i++) {
            if(mapy[i] > 0) {
                if(mapy[i] > mf) {
                    mf = mapy[i];
                }
                if(mapy[i] < lf) {
                    lf = mapy[i];
                }
            }
        }
        
        return (mf - lf);
    }

    int beautySum(const std::string &s) {
        int res = 0;
        
        for(int i = 0; i < s.length(); i++) {
            std::vector<int> mapy(26, 0);
            for(int j = i; j < s.length(); j++) {
                mapy[s[j] - 'a']++;
                res += beauty(mapy);
            }
        }
        
        return res;
    }
};