void insert(stack<int>&s , int x ){
    if(s.empty() || s.top()<=x){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
}


void SortedStack :: sort()
{
   //Your code here
   int x;
   if(s.empty())return;
   
   x=s.top();
   s.pop();
   sort();
   insert(s,x);
   
}