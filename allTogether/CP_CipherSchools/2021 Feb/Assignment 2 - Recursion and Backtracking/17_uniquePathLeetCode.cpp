// https://leetcode.com/problems/unique-paths/


//////////////////////////////////// It's a DP question
class Solution {
public:
    
    bool isValid(int x,int y,int a,int b){
    if(a<=x && b<=y){
        return true;
    }
    else{
        return false;
    }
}

void totalPaths(int row,int column,int curr_row,int curr_column,int &count){
    if(!isValid(row,column,curr_row,curr_column)){
        return;
    }
    if(row==curr_row && column==curr_column){
        count++;
    }

    totalPaths(row,column,curr_row+1,curr_column,count);
    totalPaths(row,column,curr_row,curr_column+1,count);
    

}
    
    int uniquePaths(int m, int n) {
        int count=0;
        totalPaths(m,n,1,1,count);
        return count;
    }
};