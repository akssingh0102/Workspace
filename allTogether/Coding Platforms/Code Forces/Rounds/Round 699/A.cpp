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
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int L,R,U,D;
        L=R=U=D=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='L') {
            L++;
            }
            else if(s[i]=='R') {
            R++;
            }
            else if(s[i]=='U') {
            U++;
            }
            else {
            D++;
            }
        }
        bool x_true=false,y_true=false;
        if(x < 0){
            if(abs(L) >= abs(x)){
                x_true=true;
            }
        }
        else{
            if(R >= x){
                x_true=true;
            }
        }
        if(y < 0){
            if(abs(D) >= abs(y)){
                y_true=true;
            }
        }
        else{
            if(U >= y){
                y_true=true;
            }
        }
        if(x_true && y_true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // cout<<U<<D<<L<<R<<endl;
    }
    return 0;
}