class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> s;


    //we iterate over each element of string and run while loop for every element and pop the stack if while condition is true
    //if while is false -> we simply push the num[i] into the stack

    for(int i = 0; i<n; i++){
        while( !s.empty() && k > 0 && ( s.top() - '0' ) > ( num[i] - '0' ) ){
            s.pop();
            k--;
        }
        s.push(num[i]);
    }

    //handling edge case 3 -> if we have a incremental string then no pop occurs as every num[i] > s.top() -> so we might end up adding all elements to stack and k didn't decrease at all, or we might removed some elements but k still isn't zero that means we reached incremental string state midway and some part of the string is incremental rather entire string being incremental -> so we handle this case by simply popping the stack equal to remaining k.
    
    while( k > 0 ){
        s.pop();
        k--;
    }


    //At this point out stack has the result in reversed order.

    string result = "";
    while( !s.empty() ){
        
        //storing the result is reverse order in string
        result += s.top();
        s.pop();
    }

    //handling 2nd edge cases -> to eliminate leading zeros, we check if the back which is effectively the start of our answer is zero or not and unti result is not empty and string starts with zero, we keep removing it, as soon as all starting zeros are removed or string gets empty the result contains the answer in reverse order

    while( !result.empty() && result.back() == '0'){
        result.pop_back();
    }

    reverse(result.begin(), result.end());


    //handling 1st edge case -> k == n where we end up removing everything or we all element in result were zeros 
    if(result.empty()){
        return "0";
    }

    return result;
    }
};