class Solution {
public:
    int findMaxEle(int mid, vector<vector<int>>& mat, int rowSize, int colSize) {
        int maxi = INT_MIN;
        int index=0;
        for (int i = 0; i < rowSize; i++) {
            if(maxi<mat[i][mid])
            {
                maxi=mat[i][mid];
                index = i;
            }

        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        // Check if there is only one row
        if (n == 1) {
            int maxIndex = max_element(mat[0].begin(), mat[0].end()) - mat[0].begin();
            return {0, maxIndex};
        }

        int s = 0;
        int e = m - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            int row = findMaxEle(mid, mat, n, m);
            
            // Check if mid - 1 and mid + 1 are within valid indices
            int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
            int right = mid + 1 < m ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            } else if (mat[row][mid] < left) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return {-1, -1};
    }
};