class Solution {
public:
void generate(string &num, int target, int curr, vector<string> &res, string build, long long int prevNumber, long long int currSum, int n){
        if(curr==num.size()){
            if(currSum==target){
                res.push_back(build);
            }
            return;
        }
        for(int len=1;len<=(n-curr);len++){
            string number=num.substr(curr,len);
            if(number[0]=='0' && number.size()>1){
                continue;
            }
            long long int currNum=stoll(number);
            generate(num,target,curr+len,res,build+"+"+number,currNum,currSum+currNum,n);
            generate(num,target,curr+len,res,build+"-"+number,-currNum,currSum-currNum,n);
            generate(num,target,curr+len,res,build+"*"+number,currNum*prevNumber,currSum-prevNumber+currNum*prevNumber,n);
        }
    }
    vector<string> addOperators(string num, int target) {
          vector<string> res;
        int n=num.size();
        for(int len=1;len<=n;len++){
            string number=num.substr(0,len);
            if(number[0]=='0' && number.size()>1){
                continue;
            }
            long long int currNum=stoll(number);
            generate(num,target,len,res,number,currNum,currNum,n);
        }
        return res;
    }
};