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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{
        int n,k;
        cin>>n>>k;
        take(a,n)
        int maxx,mex;
        maxx=a[0];
        unordered_set<int> aa;
        for (int i = 0; i < n; i++)
        {
            aa.insert(a[i]);
            maxx=max(a[i],maxx);
        }
        for(int i=0;i<=100000;i++){
            if(aa.count(i)==0){
                mex=i;
                break;
            }
        }
        if(mex==(maxx+1) || k==0){
            cout<<n+k<<endl;
        }
        else if(aa.count(ceil((maxx+mex)/2.0))==0){
            // cout<<(ceil((maxx+mex)/2.0));
            cout<<n+1<<endl;
        }
        else{
            cout<<n<<endl;
        }

    }
    return 0;
}