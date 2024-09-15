class Solution {
public:
    int romanToInt(string s) {
        // int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
        vector<int> v;   // to store integral value of roman 
        for(char c : s){
            if (c =='I') v.push_back(1);
            else if (c == 'V') v.push_back(5);
            else if (c == 'X') v.push_back(10);
            else if (c == 'L') v.push_back(50);
            else if (c == 'C') v.push_back(100);
            else if (c == 'D') v.push_back(500);
            else v.push_back(1000);
        }

        int sum = 0;
       for(int i = 0; i < v.size()- 1; i++){
            if( v[i] >= v[i+1]) sum += v[i];
            else sum -= v[i];
        }
        sum += v[v.size() - 1];
        return sum;   
    }
};