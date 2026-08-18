class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long newMass = mass;
        int n = asteroids.size();
        for(int i = 0 ; i < n ;i++){
            if(newMass < asteroids[i]){
                return false;
            }
            newMass += asteroids[i];
        }
        return true;
    }
};