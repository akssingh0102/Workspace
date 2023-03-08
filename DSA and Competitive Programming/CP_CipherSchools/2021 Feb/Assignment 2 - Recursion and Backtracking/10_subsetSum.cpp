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

class Solution{
public:
    int cal(int node, int a[], int cur, int sum, int n, vector<vector<int>> &dp)
    {
        if(node >= n){
            if(cur*2 != sum) 
                return 0;
            else 
                return 1;
        }
        if(cur*2 > sum) 
            return dp[node][cur] = 0;
        if(cur*2 == sum) 
            return dp[node][cur] = 1;
        if(dp[node][cur] != -1) 
            return dp[node][cur];
        int f = 0;
        f = cal(node+1, a, cur+a[node], sum, n, dp) | cal(node+1, a, cur, sum, n, dp);
        
        return dp[node][cur] = f;
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i = 0;i < N;i++)
            sum += arr[i];
        vector<vector<int>> dp(N, vector<int>(sum+1, -1));
        int x = cal(0, arr, 0, sum, N, dp);
        return x;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    return 0;
}