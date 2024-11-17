class Solution {
public:
    vector<int> findnse(vector<int> &arr){
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st1;

        for(int i = n-1 ; i >= 0 ; i--){
            while(!st1.empty() && arr[st1.top()] >= arr[i])
                st1.pop();
            nse[i] = st1.empty() ? n : st1.top();
            st1.push(i);    
        }
        return nse;

    }
    vector<int> findpsee(vector<int> &arr){
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st2;

        for(int i = 0 ; i <n ; i++){
            while(!st2.empty() && arr[st2.top()] > arr[i])
                st2.pop();
            pse[i] = st2.empty() ? -1 : st2.top();
            st2.push(i);    
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {

        vector<int> nse = findnse(arr);
        vector<int> psee = findpsee(arr);
        int total = 0; 
        int mod = (int)(1e9 + 7);
        for(int i = 0 ; i < arr.size() ; i++){
            int left = i - psee[i];
            int right = nse[i] - i;

            total = (total + (right*left* 1LL * arr[i] )%mod)%mod ;


        }
        return total;
    }
};