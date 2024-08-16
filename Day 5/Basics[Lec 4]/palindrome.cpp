class Solution {
public:
    bool isPalindrome(int x) {
        long long dup=x;
        long long r = 0;
        if(x<0) return false;
        while(x){
            r = (r*10)+x%10;
            x = x/10;
        }
        if(r == dup) return true;
        else return false;
    }
};