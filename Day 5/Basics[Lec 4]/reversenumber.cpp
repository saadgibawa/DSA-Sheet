class Solution {
public:
    int reverse(int x) {
        long rev =0;
        while(x){
            if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            int digit = x%10;
            rev = (rev*10)+digit; 
            x= x/10;
        }
        return rev;
    }
};