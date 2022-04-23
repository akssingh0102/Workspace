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
#define take(a,n)           vector <ll> a; for(ll i=0;i<n;i++){ll aa; cin>>aa; a.pb(aa);}
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
        ll n,T;
        cin>>n>>T;
        take(a,n)
        if(T%2==1){
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]%2<<" ";
            }
            cout<<endl;
            
        }
        else{
            // cout<<5555<<endl;
            unordered_map <ll,ll> m;
            for (int i = 0; i < n; i++)
            {
                if(m.find(a[i])==m.end())
                m[a[i]]=1;
                if((m.find(T-a[i])==m.end())){
                    m[T-a[i]]=0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout<<m[a[i]]<<" ";
                if(a[i]*2==T)
                m[a[i]]=(m[a[i]]+1)%2;
            }
            cout<<endl;
            

        }
    }
    return 0;
}