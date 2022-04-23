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
bool c(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{
        iz(n)
        take(a,n)
        take(b,n)
        vector < pair<int,int> > p;
        for (int i = 0; i < n; i++)
        {
            p.push_back(make_pair(a[i],b[i]));
        }
        sort(p.begin(),p.end(),c);
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<p[i].first<<" "<<p[i].second<<endl;
        // }
        ll own=0,dev=0;
        for (int i = n-1; i >= 0; i--)
        {
            if(p[i].first <= dev) continue;
            if((p[i].first > (own+p[i].second )) && (p[i].first > dev)){
                own+=p[i].second;
            }
            else{
                // if(p[i].first > ())
                dev=max(dev,(ll)p[i].first);
            }
        }
        cout<<max(own,dev)<<endl;
        
               
    }
    return 0;
}