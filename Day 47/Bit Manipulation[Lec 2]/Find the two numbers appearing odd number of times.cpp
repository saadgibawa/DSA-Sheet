class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long xor_res = 0;
        
        for(int i=0;i<N;i++){
            xor_res ^= Arr[i];
        }
        
        long long int res1 = 0,res2 = 0;
        
        int set_bit = xor_res & ~(xor_res-1);
        
        for(int i=0;i<N;i++){
            
            if(Arr[i] & set_bit){
                res1 ^= Arr[i];
            }else{
                res2 ^= Arr[i];
            }
        }
        if(res1 > res2) return {res1,res2};
        
        return {res2,res1};
    }
};