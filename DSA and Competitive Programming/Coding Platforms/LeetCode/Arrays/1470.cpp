#define pb  push_back
class Solution {
public:
    vector<int> shuffle(vector<int>& num, int n) {
        vector <int> aa;
        int i,j;
        i=0;
        j=(n);
        while (j<(2*n))
        {
            aa.pb(num[i++]);
            aa.pb(num[j++]);
        }
        
        return aa;
    }
};