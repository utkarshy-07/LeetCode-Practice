class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;

        for(int i=num1;i<=num2;i++){
            vector<int> tmp;
            int curr=i;
            while(curr){
                tmp.push_back(curr%10);
                curr/=10;
            }
            reverse(tmp.begin(),tmp.end());
           // cout<<tmp.size()<<endl;
            for(int j=1;j<tmp.size()-1;j++){
                int cr=tmp[j];
                int pr=tmp[j-1];
                int nxt=tmp[j+1];

                if(cr>pr&&cr>nxt)ans++;
                if(cr<pr&&cr<nxt)ans++;
            }
        }
        return ans;
    }
};