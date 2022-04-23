#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];

        }
        int b[n]={};
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                b[i]=1;
            }
            else if(a[i]%k==0){
                b[i]=1;
            }
            else
            {
                b[i]=0;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<b[i];
        }
        cout<<endl;
        
        
        
    }    
    return 0;
}