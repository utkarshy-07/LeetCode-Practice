class Solution {
public:
    // static bool cmp(int &a, int &b){

    // }
    vector<int> sortEvenOdd(vector<int>& nums) {
        ///  sort(nums.begin(),nums.end(),cmp);
        vector<int> en, on;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                en.push_back(nums[i]);
            else
                on.push_back(nums[i]);
        }
        sort(en.begin(), en.end());
        sort(on.rbegin(), on.rend());
        int e = 0, o = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                nums[i] = en[e++];
            } else {
                nums[i] = on[o++];
            }
        }
        return nums;
    }
};
