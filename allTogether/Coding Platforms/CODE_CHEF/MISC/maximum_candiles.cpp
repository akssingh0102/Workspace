#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m,x,y;
        cin>>n>>m>>x>>y;
        long long int a[n][m]={};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if((i+j)%2==0){
                    a[i][j]=min(x,y);
                }
                else if ((i+j)%2==1)
                {
                    long long int checker=y-min(x,y);
                    if(checker>x){
                        a[i][j]=x;
                    }
                    else
                    a[i][j]=y-min(x,y);
                }
                
            }  
        }
        long long int sum=0;
       
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum+=a[i][j];
                
            }  
        }
        if(n==1 && m==1)sum=x;
        
        cout<<sum<<endl;
    }    
    
    return 0;
}