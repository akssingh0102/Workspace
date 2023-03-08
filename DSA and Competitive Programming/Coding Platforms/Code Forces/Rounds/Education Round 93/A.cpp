#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    int low=INT_MAX,high=INT_MIN,low_key=-1,high_key=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<low){
            low_key=i+1;
            low=a[i];
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>high && (low_key-1)!=i){    
            high_key=i+1;
            high=a[i];
        }
    }
    
    int res=-1;
        for (int i = 0; i < n; i++)
        {
            if((i!=low_key-1) && (1!=high_key-1)){
                if((low+a[i]<=high)){
                    res=i+1;
                }
            }
        }
        if(res!=-1){
            cout<<low_key<<" "<<res<<" "<<high_key<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}