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
    
    int dur,n;
    cin>>dur>>n;

    take(a,n)

    unordered_map<int,int> m;
    int req_durr=dur-30;
    pair<int,int> res,in;
    res.first=-1;
    res.second=-1;

    for (int i = 0; i < n; i++)
    {
        
        if(m.count(req_durr-a[i])==1){
            m[a[i]]=i;
            int maxx=max(a[i],req_durr-a[i]);

            if(res.first==-1 || (res.first < maxx)){
                res.first=maxx;
                in.first=m[maxx];

                res.second=req_durr-maxx;
                in.second=m[req_durr-maxx];
            }
        }
        m[a[i]]=i;
    }

    if(res.first!=-1){
        cout<<min(in.first,in.second)<<" "<<max(in.first,in.second);
    }
    else{
        cout<<-1<<" "<<-1;
    }
    


    
    

    return 0;
}