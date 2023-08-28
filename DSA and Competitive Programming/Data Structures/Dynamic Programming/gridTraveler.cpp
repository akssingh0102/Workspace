#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>  // Include this header for the hash function

using namespace std;

namespace std {
    template <>
    struct hash< pair <long long int, long long int> > {
        size_t operator()(const pair<long long int, long long int>& p) const {
            return hash<long long int>()(p.first) ^ hash<long long int>()(p.second);
        }
    };
}

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

unordered_map<pair<long long int, long long int>, long long int> um;

long long int gridTraveler(long long int m, long long int n){
    if(m == 0 || n == 0) return 0;
    if(n == 1 && m == 1) return 1;

    pair<long long int, long long int> right = make_pair(m, n - 1);
    pair<long long int, long long int> down = make_pair(m - 1, n);

    long long int moveRight = -1;
    long long int moveDown = -1;

    if(um.count(right) != 0){
        moveRight = um[right];
    } else {
        moveRight = gridTraveler(m, n - 1);
        um[right] = moveRight;
    }

    if(um.count(down) != 0){
        moveDown = um[down];
    } else {
        moveDown = gridTraveler(m - 1, n);
        um[down] = moveDown;
    }
   
    return moveRight + moveDown;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    long long int result = gridTraveler(18, 18);
    cout << "Result : " << result;
    return 0;
}
