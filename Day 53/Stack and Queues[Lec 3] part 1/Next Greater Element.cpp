class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Map to store the next greater element for each element in nums2
        unordered_map<int, int> nextGreater;
        // Stack to keep track of the next greater element
        stack<int> st;

        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; --i) {
            // Pop elements from the stack that are less than or equal to the current element
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            // If the stack is not empty, the top element is the next greater element
            nextGreater[nums2[i]] = st.empty() ? -1 : st.top();
            // Push the current element onto the stack
            st.push(nums2[i]);
        }

        // Result vector for nums1
        vector<int> result(nums1.size());
        // Fill the result vector using the nextGreater map
        for (int i = 0; i < nums1.size(); ++i) {
            result[i] = nextGreater[nums1[i]];
        }

        return result;
    }
};