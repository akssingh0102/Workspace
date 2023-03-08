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
#define pq                  priority_queue <int, vector<int>, greater<int> >
#define mod                 1000000007


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    com{
    ll res=1;
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    ll arr1[x2];

    ll diff1=2;
    arr1[0]=1;
    for (int i = 1; i < x2; i++){
        arr1[i]=arr1[i-1]+diff1;
        diff1++;
        res+=arr1[i];
    }

    ll arr2[y2-1];
    ll prev=arr1[x2-1];
    ll diff2=x2;
    for (int i = 0; i < y2-1; i++)
    {
        arr2[i]=prev+diff2;
        prev=arr2[i];
        res+=arr2[i];
        diff2++;
    }
    cout<<res<<endl;

    
    
    }
    
    
    return 0;
}