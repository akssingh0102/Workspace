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


void generateHelper(int x,vector <string> &res,int l,int r,string curr){
    // string s;
    if(r>l){
        return;
    }
    if(l>x || r>x){
        return;
    }
    if((l==x) && (r==x)){
        res.push_back(curr);
        return;
    }

    generateHelper(x,res,l+1,r,curr+"(");
    generateHelper(x,res,l,r+1,curr+")");
    

}
vector <string> generate(int x,vector <string> &res){
    int l_count=0,r_count=0;
    generateHelper(x,res,l_count,r_count,"");
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n=3;
    vector <string> res;
    generate(n,res);
    for(auto xx : res){
        cout<<xx<<endl;
    }
    
    return 0;
}