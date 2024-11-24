class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxi=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        maxi=lsum;
        int r=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[r];
            r--;
            maxi=max(maxi,lsum+rsum);
        }
        return maxi;
    }
};