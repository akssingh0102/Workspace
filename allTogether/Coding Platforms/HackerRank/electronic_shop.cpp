#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int b,n,m;
    cin>>b>>n>>m;
    int a[n];
    int bb[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin>>bb[i];
    }
    int maxx=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < m; j++)
        {
            if(a[i]+bb[j]<=b){
                maxx=max(maxx,(a[i]+bb[j]));
            }
        }
        
    }
    cout<<maxx<<endl;
    

    return 0;
}