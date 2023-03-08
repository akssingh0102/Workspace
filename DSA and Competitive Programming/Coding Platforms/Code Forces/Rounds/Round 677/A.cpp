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
 
int digitCount(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    com{
        iz(n)
        int res=((n%10)-1)*10;
        int count=digitCount(n);
        if(count==1){
            res+=1;
        }
        else if(count==2){
            res+=3;
        }
        else if(count==3){
            res+=6;
        }
        else if(count==4){
            res+=10;
        }
        cout<<res<<endl;
 
    }
    return 0;
}