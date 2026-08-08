class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        if(finalSum % 2 != 0 ) return {};
        vector<long long> ans; 
        long long current = 2;
        while(finalSum  >= current){
            ans.push_back(current);
            finalSum -= current;
            current += 2;
        }
        if(finalSum > 0){
            ans.back()+= finalSum;
        }
        return ans;
    }
};