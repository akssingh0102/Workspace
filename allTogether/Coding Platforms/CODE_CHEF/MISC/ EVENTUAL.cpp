#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>s;
        int a[26]={};
        for (int i = 0; i < n; i++)
        {
            a['a'-s[i]]++;
        }
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==1){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        

    }
    return 0;
}   