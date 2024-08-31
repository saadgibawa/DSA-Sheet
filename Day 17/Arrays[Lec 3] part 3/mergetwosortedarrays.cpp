class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m - 1;
        int right = 0;

        //Swap the elements until arr1[left] is
        // smaller than arr2[right]:
        while (left >= 0 && right < n) {
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--; 
                right++;
            }
            else {
                break;
            }
        }

        // Sort arr1[] and arr2[] individually:
        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.end());

        for(int i=m; i<m+n; i++){
            nums1[i] = nums2[i-m];
        }
    }
};