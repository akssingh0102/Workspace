// Trapping rain water

//https://www.geeksforgeeks.org/trapping-rain-water/

// can be done better 

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

int maxWater(int *arr,int &n){
    int res=0;

    int left[n],right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];

    for (int i = 1; i < n; i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }

    for (int i = n-2; i >= 0; i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        res += (min(left[i],right[i]) - arr[i]);
    }
    
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxWater(arr, n) << endl;

    return 0;
}