class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans;
        stack<int> st;

        unordered_map<int, int> mapp;

        for (int i = m - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= nums2[i])
            {

                st.pop();
            }

            if (st.empty())
            {
                mapp[nums2[i]] = -1;
            }
            else
            {
                mapp[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        for (auto i : nums1)
        {
            ans.push_back(mapp[i]);
        }

        return ans;
    }
};