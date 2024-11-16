class Solution {
public:
    double myPow(double x, int n)
    {
        if(x == 1 || x == 0)
            return x;

        double pow = 1.0;

        while(n)
        {
            if(n%2 == 1 && n>0)
                pow *= x;
            else if(n%2 == -1 && n<0)
                pow /= x;

            x *= x;
            n /= 2;
        }  

        return pow;
    }
};