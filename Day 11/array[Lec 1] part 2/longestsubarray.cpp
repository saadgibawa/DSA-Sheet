int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map <long long,int> preSumMap;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                maxLen=max(maxLen,i+1) ;
            }
            long long rem=sum-K;
            if(preSumMap.find(rem)!=preSumMap.end()){
                int len=i-preSumMap[rem];
                maxLen=max(maxLen,len);
            }
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum]=i;
            }
        }
    return maxLen;   
    } 