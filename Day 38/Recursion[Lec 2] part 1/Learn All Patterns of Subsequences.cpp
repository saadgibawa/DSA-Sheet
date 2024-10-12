class Solution {
  public:
    int helper(string s)
    {
        unordered_map<char, int> mp;
        int count = 1;

        for (auto ch : s) {
            int temp = 2 * count;

            if (mp.find(ch) != mp.end())
                temp -= mp[ch];

            mp[ch] = count;
            count = temp;
        }
        return count;
    }

    string betterString(string s1, string s2) {
        int a = helper(s1);
        int b = helper(s2);

        return b > a ? s2 : s1;
    }
};