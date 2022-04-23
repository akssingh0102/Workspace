#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        int b[n];
        int max_so_far=INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(max_so_far<a[i]){
                max_so_far=a[i];
            }  
            b[i]=max_so_far;    
        }
        int query[q];
        for (int i = 0; i < q; i++)
        {
            cin>>query[i];
        }
        for (int i = 0; i < q; i++)
        {
            cout<<b[query[i]]<<" ";
        }
        cout<<endl;           
    }
          
    return 0;
}