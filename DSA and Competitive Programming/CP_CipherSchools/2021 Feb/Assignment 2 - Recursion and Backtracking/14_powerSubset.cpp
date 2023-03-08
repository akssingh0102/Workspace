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

void powerSubHelper(string Num,vector<string> &res,string curr,bool pass,int index){
    if(index>=Num.length()){
        return;
    }
    if(pass){
        res.push_back(curr);
        
    }

    for(int i=index;i<Num.length();i++){
        powerSubHelper(Num,res,Num.substr(index,i+1),true,index+1);
    }
}

vector <string> powerSub(string  &Num){
    vector <string> res;
    powerSubHelper(Num,res,"",false,0);
    return res;
}
///////////////////////////////////////////// NOT DONE YET ///////////////////////////////////
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    string Num = "2345";

    vector <string> res=powerSub(Num);

    for(string x:res){
        cout<<x<<" ";
    }
    
    
    return 0;
}