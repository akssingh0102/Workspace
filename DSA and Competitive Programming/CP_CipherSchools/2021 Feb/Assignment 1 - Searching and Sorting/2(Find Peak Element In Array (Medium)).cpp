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

int findPeak(vector <int>& a){
    int l=0,r=a.size()-1;
    int n=a.size();
    int mid= (l+(r-l))/2;

    while(l<=r){
        if ((mid == 0 || a[mid - 1] <= a[mid]) && 
        (mid == n - 1 || a[mid + 1] <= a[mid]))
        return a[mid];

        else if (mid > 0 && a[mid - 1] > a[mid]){
            r=mid-1;
        }

        else{
            l=mid+1;
        }
        mid=(l+(r-l))/2;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    vector <int> a = { 1, 3, 20, 4, 1, 0 };
    int res=findPeak(a);
    cout<<res<<endl;
    
    
    return 0;
}