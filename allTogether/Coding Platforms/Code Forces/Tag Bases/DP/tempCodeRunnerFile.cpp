#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
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

int longSubSequence(ll a[],int n){
    ll lis[n];
    lis[0]=1;
    for (int i = 1; i < n; i++)
    {
        lis[i]=1;
        for (int j = 0; j < i; j++)
        {
            if(a[j]<=a[i]){
                lis[i]=max(lis[i],lis[j]+1);
            }
        }
        
    }
    ll res=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        res=max(res,lis[i]);
    }
    return res;
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
        iz(n)
        ll a[n];
        forn(n){
            cin>>a[i];
        }
    cout<<longSubSequence(a,n);
    
    return 0;
}