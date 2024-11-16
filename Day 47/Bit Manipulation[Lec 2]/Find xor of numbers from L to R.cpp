class Solution {
    
    int f(int n){
        
        if(n % 4 == 1) return 1;
        if(n % 4 == 2) return n + 1;
        if(n % 4 == 3) return 0;
        else return n;
        
    }
    
    public:
    
    int findXOR(int l, int r) {
        
        return f(l - 1) ^ f(r);
        
    }
};