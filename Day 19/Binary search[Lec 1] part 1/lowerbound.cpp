
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {
        int low = 0, high = n - 1;
        int floorIndex = -1;
        while (low <= high)
        {
            int middle = low + (high - low) / 2;
            int element = v[middle];
            if (element <= x)
            {
                floorIndex = middle;
                low = middle + 1;
            }
            else
                high = middle - 1;
        }
        return floorIndex;
    }
};

