class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
        
        vector<int> st;
        
        if(N%2 == 0){
            st.push_back(2);
            while(N%2 == 0){
                N /= 2;
            }
        }
        if(N%3 == 0){
            st.push_back(3);
            while(N%3 == 0){
                N/= 3;
            }
        }
        
        for(int i=5;i*i<= N; i+= 6){
            
            if(N%i == 0){
                st.push_back(i);
                while(N%i == 0){
                    N/=i;
                }
            }
            if(N%(i+2) == 0){
                st.push_back(i+2);
                while(N%(i+2) == 0){
                    N /= (i+2);
                }
            }
        }

        if(N != 1) st.push_back(N);
        return st;
    }
};