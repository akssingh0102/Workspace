class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxx=INT32_MIN;
        if(nums.size()==0){
            return 1;
        }
        unordered_set <int> s;
        for(int i=0;i<nums.size();i++){
            if(maxx<nums[i]){
                maxx=nums[i];
            }
            if(nums[i]>0)
            s.insert(nums[i]);
        }
        if(s.size()==0){
            return 1;
        }
        for(int i=1;i<maxx;i++){
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return maxx+1;
        
    }
};