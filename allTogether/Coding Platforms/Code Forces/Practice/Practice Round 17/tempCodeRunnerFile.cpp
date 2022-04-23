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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s1,s2;
    cin>>s1>>s2;
    int len1,len2;
    len1=s1.length();
    len2=s2.length();
    bool s11=1,s22=1;
    for (int i = 0; i < len2; i++)
    {
        if(s1[i]!=s2[i]){
            s11^=1;
        }
    }
    int res=0;
    if(s11==1){
        res++;
    }
    for (int i = len2; i < len1; i++)
    {
        if(s1[i]!=s1[i-len2]){
            s11^=1;
        }
        if(s11==1){
            res++;
        }
    }
    cout<<res<<endl;
    
    
    
    return 0;
}