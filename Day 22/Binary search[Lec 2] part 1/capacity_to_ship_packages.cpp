class Solution {
public:

    int find_weights(vector<int>& weights, int mid)
    {
        int days=1;
        int load=0;
        for(int i=0; i<weights.size(); i++)
        {
            if(weights[i]+load > mid)
            {
                days+=1;
                load=weights[i];
            }
            else
            {
                load +=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(),weights.end());
        int e=accumulate(weights.begin(),weights.end(),0);
        

        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int no_of_days = find_weights(weights,mid);
            if (no_of_days<=days)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return s;
    }
};