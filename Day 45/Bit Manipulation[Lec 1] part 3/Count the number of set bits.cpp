class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
     int countSetBits(int n)
    {
        int count = 0;
    int x = 0; // Position of the current bit we're considering
    
    while ((1 << x) <= n) {
        // Calculate the total number of pairs of 0s and 1s at bit position x
        int totalPairs = n + 1;
        int pairsWithOne = totalPairs >> (x + 1);
        int remainder = totalPairs & ((1 << (x + 1)) - 1);
        
        count += pairsWithOne * (1 << x);
        
        // Add the remainder bits if they exist and contain a 1 in the current bit position
        if (remainder > (1 << x)) {
            count += remainder - (1 << x);
        }
        
        x++;
    }
    
    return count;

    }


};