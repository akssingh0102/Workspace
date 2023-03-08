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
        take(a,4)
        pair<int,int> p1,p2;
        p1.first=INT_MIN;
        p2.first=INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            if(a[i]>p1.first){
                p1.first=a[i];
                p1.second=i;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if(a[i]>p2.first && a[i]!=p1.first){
                p2.first=a[i];
                p2.second=i;
            }
        }
        if(p1.second<2 && p2.second<2){
            cout<<"NO"<<endl;
        }
        else if(p1.second>1 && p2.second>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        

        
    }
    return 0;
}