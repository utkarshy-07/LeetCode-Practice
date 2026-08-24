class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])return a[0]<b[0];
        return a[1]>b[1];
    }
    vector<int> frequencySort(vector<int>& nums) {
        int  n = nums.size();
        vector<int> hash(202,0);
        // hash
        for(int i = 0; i < n ; i++){
            int curr = nums[i];
            // ind 
            int ind = curr + 100;
            // cnt incr
            hash[ind]++;
        }
        vector<vector<int>> vec;
        for(int i= 0 ;i < 202 ; i++){
            if(hash[i] > 0){
                vec.push_back({hash[i],i-100});
            }
        }
        vector<int>ans;
        sort(vec.begin(),vec.end(),cmp);
        for(auto v:vec){
            int freq=v[0];
            int ele=v[1];

            //
            while(freq--){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};