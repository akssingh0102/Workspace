#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;    
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
        cin>>m;
        int a[n],b[m];
        unordered_set <int> aa;
        unordered_set <int> bb;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            aa.insert(a[i]);

        }
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
            aa.insert(b[i]);

        }
        cout<<aa.size()<<endl;
        
    }
    
    return 0;
}