class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        if(celsius == 0 ){
           double kel = 273.15;
           ans.push_back(kel);
           double fah = 32.00;
           ans.push_back(fah);
        }
        if(celsius > 0) {
        double kel = (celsius + 273.15);
        ans.push_back(kel);
        double fah = (celsius * 1.80)  + 32.00;
        ans.push_back(fah);
        }
        return ans;
    }
};