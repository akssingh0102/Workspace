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
        iz(n)
        take(a,n)
        int c0,c1,c2;
        c0=c1=c2=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%3==0){
                c0++;
            }
            else if(a[i]%3==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        int avg=n/3;
        // cout<<c0<<c1<<c2<<endl;

        int count=0;
        while(1){
            if(c1==avg && c2==avg && c0==avg) break;
            if(c0 > avg){
                // cout<<00;
                int d=c0-avg;
                c0=avg;
                c1+=d;
                count+=d;
            }
            if(c1 > avg){
                // cout<<11;
                int d=c1-avg;
                c1=avg;
                c2+=d;
                count+=d;
            }
            if(c2 > avg){
                // cout<<22;
                int d=c2-avg;
                c0+=d;
                c2=avg;
                count+=d;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}