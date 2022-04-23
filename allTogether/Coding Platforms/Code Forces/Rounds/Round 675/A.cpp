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
    
    com{
        ll a,b,c,d;
        cin>>a>>b>>c;
        ll m=0,mi=0;
        m=max(a,b);
        m=max(m,c);
        mi=min(a,b);
        mi=min(mi,c);
        ll mid;
        if(a!=m && a!=mi){mid=a;}
        else if(b!=m && b!=mi){mid=b;}
        else if(c!=m && c!=mi){mid=c;}
        cout<<m<<" "<<mi<<" "<<mid<<endl;
        m=m-mi;
        ll num=(m*m)+(mid*mid);
        num=sqrt(num);
        cout<<num<<endl;;
    }
    return 0;
}