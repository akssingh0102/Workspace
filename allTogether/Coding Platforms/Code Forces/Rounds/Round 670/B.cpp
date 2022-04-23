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

        iz(n)
        take(a,n)
        sort full(a);
        int time=6;
        int start=n-5;
        ll res=-1e18;
        while(time--){
            ll curr_res=1;
            ll beg=start;
            for (int i = 0; i < 5; i++,beg++)
            {
                
                curr_res*=a[(beg)%n];
            }
            // res= max( curr_res, res);
            if(curr_res>res){
                res=curr_res;
            }
            start++;
        }
        cout<<res<<endl;
        a.clear();
    }
    
    return 0;
}