#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
#define llmin               -1e18
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define take(a,n)           vector <int> a; for(int i=0;i<n;i++){int aa; cin>>aa; a.pb(aa);}
#define vll                 vector<ll> 
#define full(a)             (a.begin(),a.end())
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)
ll maxBit(ll num){
    return log2(num)+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{ 
        ll n;
        vector <ll> a;
        forn(n){
            ll data;
            a.pb(data);
        }
        vector <ll> visit;
        forn(n){
            visit.pb(0);
        }
        int bit[33]={};
        for (int i = 0; i < n; i++)
        {
            visit[i]=maxBit(a[i]);
        }
        
        ll res=0;
        for (int i = 1; i < 33; i++)
        {
            res+=(bit[i]*(bit[i]-1))/2;
        }
        cout<<res<<endl;
        
        
    }
    return 0;
}