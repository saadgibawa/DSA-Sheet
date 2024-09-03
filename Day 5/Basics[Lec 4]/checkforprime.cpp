class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if (n == 1) return 0;

        int l = 0;
        int r = 0;
        int jumps = 0;

        while (r < n - 1) {
            int farthest = 0;
            for (int i = l; i <= r; i++) {
                farthest = max(farthest, arr[i] + i);
            }
            if (farthest <= r) {
                // If farthest is not increasing, then we are stuck
                return -1;
            }
            l = r + 1;
            r = farthest;
            jumps++;
        }

        return jumps;
    }
};
