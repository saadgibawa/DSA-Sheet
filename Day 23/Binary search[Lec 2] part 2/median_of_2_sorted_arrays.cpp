class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int c = m+n;
        vector<int> merged(c);
        int i=0 ,j=0 ,k=0;
        while(i<m){
            merged[k++] = nums1[i++];
        }
        while(j<n){
            merged[k++] = nums2[j++];
        }
        sort(merged.begin(),merged.end());
        int z = merged.size();
        if(z%2 == 1){
            return merged[z/2];
        }
        else{
            int middle1 = merged[z/2-1];
            int middle2 = merged[z/2];
            return (double)(middle1+middle2)/2.0;
        }
    }
};