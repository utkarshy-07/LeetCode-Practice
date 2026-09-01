class Solution {
public:
    string mapWordWeights(vector<string>& wd, vector<int>& wt) {
        int n=wd.size();

        string ans;
        for(auto v:wd){
            int t=0;
            for(int i=0;i<v.length();i++){
                int ind=v[i]-'a';
                t+=(wt[ind]);
            }
            //cout<<t<<endl;
            t%=26;
            char curr=(char)('z'-t);
            ans+=curr;
        }
        return ans;
    }
};