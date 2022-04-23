//https://leetcode.com/problems/excel-sheet-column-number/submissions/

class Solution {
public:
    int titleToNumber(string s) {
        long res = 0;
        long cnt=1;
        long n = s.size();
        for(int i=n-1;i>=0;i--)
        {
            res+=cnt*(s[i]-'A'+1);
            cnt*=26;
        }
        return res;
    
        
    }
};