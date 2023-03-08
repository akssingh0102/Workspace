//  stocks buy and sell

//https://www.geeksforgeeks.org/stock-buy-sell/

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

int maxProfit(int *,int );

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int prices[] = { 7, 1, 5, 3, 6, 4 };
    int N = sizeof(prices) / sizeof(prices[0]);
     
    cout << maxProfit(prices, N);
    
    
    return 0;
}


int maxProfit(int prices[], int N)
{
    int n = N;
    int cost = 0;
    int maxCost = 0;
 
    if (n == 0)
    {
        return 0;
    }
     
    int min_price = prices[0];
 
    for(int i = 0; i < n; i++)
    {
         
        min_price = min(min_price, prices[i]);
 
        cost = prices[i] - min_price;
 
        maxCost = max(maxCost, cost);
    }
    return maxCost;
}