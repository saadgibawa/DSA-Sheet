class Solution {
public:
    int divide(int m, int n) {
        if (m == n) return 1;
        
        int sign = ((m < 0) ^ (n < 0)) ? -1 : 1;

        long long a = abs((long long)m);
        long long b = abs((long long)n);
        long long ans = 0;

        while (a >= b) {
            int cnt = 0;
            while (a >= (b << (cnt + 1))) cnt++;
            a -= (b << cnt);
            ans += (1 << cnt);
        }

        if (sign == -1) ans = -ans;
        if (ans == 1<<31 && sign) return INT_MAX;
        if (ans == 1<<31 && !sign) return INT_MIN;

        return (int)ans;
    }
};