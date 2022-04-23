#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
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

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        iz(n)
        vi a;
        forn(n){
            iz(data)
            a.pb(data);
        }
        int zero=0;
        int one=0;
        forn(n){
            if(a[i]==1){
                one++;
            }
            else 
            zero++;
        }
        if(zero>=one){
            cout<<n/2<<endl;
            forn(n/2){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else if(one>zero){
            if(one%2==1){
                cout<<one-1<<endl;
            
            forn(one-1){
                cout<<1<<" ";
            }
            }
            else{
            cout<<(one)<<endl;
            forn(one){
                cout<<1<<" ";
            }
            }
            cout<<endl;
        }
        // else{
        //     cout<<zero<<endl;
        //     forn(zero){
        //         cout<<0<<" ";
        
        //     }
        //     cout<<endl;
        // }

    }
    return 0;
}