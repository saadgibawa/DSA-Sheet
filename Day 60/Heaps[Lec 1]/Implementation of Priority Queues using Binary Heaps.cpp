// User function Template for C++
// 1. parent(i): Function to return the parent node of node i
// 2. leftChild(i): Function to return index of the left child of node i
// 3. rightChild(i): Function to return index of the right child of node i
// 4. shiftUp(int i): Function to shift up the node in order to maintain the
// heap property
// 5. shiftDown(int i): Function to shift down the node in order to maintain the
// heap property.
// int s=-1, current index value of the array H[].

class Solution {
  public:
    int extractMax() {
       
       int ans = H[0];
        H[0] = H[s];
        s--;
        
        int i = 0;
        while(i <= s)
        {
            int currentMax = i;
            int l = 2 * i + 1;
            if(l <= s && H[l] > H[currentMax])
            {
                currentMax = l;
            }
            int r = 2 * i + 2;
            if(r <= s && H[r] > H[currentMax])
            {
                currentMax = r;
            }
            if(i != currentMax)
            {
                swap(H[i], H[currentMax]);
                i = currentMax;
            }
            else break;
        }
        return ans;
    }
};