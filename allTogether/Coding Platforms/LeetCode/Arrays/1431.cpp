class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxx=max(maxx,candies[i]);
        }
        vector <bool> f;
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies) >= maxx){
                f.push_back(true);
            }
            else f.push_back(false);
            
        }
        return f;
    }
};