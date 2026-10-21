class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i < n ;i++){
            int mx = -1;
            for(int j = i + 1 ; j < n ; j++){
                mx = max(mx , arr[j]);
            }
            arr[i] = mx;
        }
        return arr;
    }
};