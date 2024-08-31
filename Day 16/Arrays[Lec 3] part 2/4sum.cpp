class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(int i=0; i< n; i++){
            for(int j= i+1; j<n; j++){
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum < target){
                        k++;
                    }
                    else if(sum > target){
                        l--;
                    }
                    else{
                        vector<int>v={nums[i],nums[j],nums[k],nums[l]};
                        if(find(output.begin(),output.end(),v)==output.end()) 
                        {
                            output.push_back(v);
                        }
                        k++;
                        l--;
                    }
                }
            }
        }
        return output;
    }
};