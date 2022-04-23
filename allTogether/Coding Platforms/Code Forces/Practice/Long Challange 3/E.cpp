#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
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
    ll steps,dirt;
    cin>>steps>>dirt;
    unordered_set <ll> s;
    bool flag=true;

    for (ll i = 0; i < dirt; i++)
    {
        ll data;
        cin>>data;
        s.insert(data);
        if(data==1 || data==steps){
            flag=false;
            
        }
        if(((s.count(data-1)==1) && (s.count(data+1)==1)) || ((s.count(data+1)==1) && (s.count(data+2)==1)) || ((s.count(data-1)==1) && (s.count(data-2)==1)) ){
            flag=false;
            
        }
        s.insert(data);
    }
    if(flag){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}