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

class Solution {
  public:
    long long int numberOfPaths(int m, int n)
{
    long long int count[m][n];

    for (int i = 0; i < m; i++)
        count[i][0] = 1;

    for (int j = 0; j < n; j++)
        count[0][j] = 1;

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
            count[i][j] = (count[i-1][j]%1000000007 + count[i][j-1]%1000000007)%1000000007; 

    }
    return count[m-1][n-1]%1000000007;
}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    Solution ob;
    cout<<ob.numberOfPaths(4,4);
    
    return 0;
}