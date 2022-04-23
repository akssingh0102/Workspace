#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<int>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    iz(n)
    vector < pair<int,int> > v;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb(make_pair(a,b));
    }
    iz(k)
    if(k==1){
        cout<<n;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if((k-1)>=v[i].ff  && (k-1)<=v[i].ss){
            // cout<<"II = "<<i+1<<endl;
            if((k-1)!=v[i].ss){
                // cout<<"----"<<endl;
                cout<<n-i;
                return 0;
            }
            else
            {
                // cout<<"--";

                cout<<(n-(i+1));
                return 0;
            }
            
        }
    }
    return 0;
    
}