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
    string s;
    cin>>s;
    int _1,_2,_3;
    _1=_2=_3=0;
    int isfirst=true;
    for (int i = 0; i < s.length(); i+=2)
    {
        if(s[i]=='1'){
            _1++;
        }
        else if(s[i]=='2'){
            _2++;
        }
        else{
            _3++;
        }
    }
    // cout<<_1<<_2<<_3<<endl;
    // if(_1 > 0){
    //     cout<<1;
    // }
    for (int  i = 0; i < _1; i++)
    {
        if(isfirst){
            cout<<1;
            isfirst=false;
        }
        else
        cout<<"+"<<1;
    }
    for (int i = 0; i < _2; i++)
    {
        if(isfirst){
            
            cout<<2;
            isfirst=false;
        }
        else
        cout<<"+"<<2;
    }
    for (int i = 0; i < _3; i++)
    {
        if(isfirst){
            cout<<3;
            isfirst=false;
        }
        else
        cout<<"+"<<3;
    }
    
    
    
    
    
    return 0;
}