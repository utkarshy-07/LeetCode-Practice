class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans1;
        vector<int> ans2;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                int curr = nums1[i];
                while (i < nums1.size() && nums1[i] == curr)
                    i++;
                while (j < nums2.size() && nums2[j] == curr)
                    j++;
            } else if (nums1[i] < nums2[j]) {
                if (ans1.empty() || ans1.back() != nums1[i]) {
                    ans1.push_back(nums1[i]);
                }
                i++;
            } else {
                if (ans2.empty() || ans2.back() != nums2[j]) {
                    ans2.push_back(nums2[j]);
                }
                j++;
            }
        }
        while (i < nums1.size()) {
            if (ans1.empty() || ans1.back() != nums1[i]) {
                ans1.push_back(nums1[i]);
            }
            i++;
        }
        while (j < nums2.size()) {
            if (ans2.empty() || ans2.back() != nums2[j]) {
                ans2.push_back(nums2[j]);
            }
            j++;
        }
        return {ans1, ans2};
    }
};