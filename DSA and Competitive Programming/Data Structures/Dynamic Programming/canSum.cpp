#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include <vector>
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

bool canSum(int target, vector<int> values){
    if (target == 0) return true;
    if(target < 0) return false;

    for (int i=0;i<values.size();i++){
        int remainder = target - values[i];
        if(canSum(remainder, values)) return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);

    if (canSum(7, arr)){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    // cout<<canSum(7, arr);
    
    
    return 0;
}