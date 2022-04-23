#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                a[i][j]='.';
            }
            
        }
        
        int i_count=(k-1)/8;
        int j_count=(k%8)-1;
        if(i_count==0){
            a[i_count][j_count+1]='X';
            for (int i = 0; i < (j_count+1); i++)
            {
                a[i_count][i]='X';
            }
            
        }
        else if (i_count>0)
        {
            for (int i = (j_count+1); i < 8; i++)
            {
                /* code */
                a[i_count][i]='X';
            }
            for (int  i = 0; i < 8; i++)
            {
                a[i_count+1][i]='X';
            }
            
            
        }
         a[0][0]='O';

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
            
        }
        
        
        
    }   
    return 0;
}