class Solution {
private:
    vector<int> nextGreater(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> nge(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] < nums[i]) st.pop();
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }

    vector<int> prevGreater(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> pge(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pge;
    }

    vector<int> prevSmaller(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> nextSmaller(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) st.pop();
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge = nextGreater(nums);
        vector<int> pge = prevGreater(nums);
        vector<int> nse = nextSmaller(nums);
        vector<int> pse = prevSmaller(nums);

        long long largest = 0, smallest = 0;

        for (int i = 0; i < n; i++) {
            int left = i - pge[i], right = nge[i] - i;
            largest += left * 1LL * right * nums[i];
        }

        for (int i = 0; i < n; i++) {
            int left = i - pse[i], right = nse[i] - i;
            smallest += left * 1LL * right * nums[i];
        }

        long long ans = largest - smallest;
        return ans;
    }
};