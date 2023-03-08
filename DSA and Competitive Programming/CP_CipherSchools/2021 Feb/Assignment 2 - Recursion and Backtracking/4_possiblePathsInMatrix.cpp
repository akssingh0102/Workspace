#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

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

// int numberOfPaths(int m, int n) 
// { 
//     // We have to calculate m+n-2 C n-1 here 
//     // which will be (m+n-2)! / (n-1)! (m-1)! 
//     int path = 1; 
//     for (int i = n; i < (m + n - 1); i++) { 
//         path *= i; 
//         path /= (i - n + 1); 
//     } 
//     return path; 
// } 


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int row=3,column=3;
    int res=0;
    totalPaths(row,column,1,1,res);
    cout<<res<<endl;

    
    
    return 0;
}