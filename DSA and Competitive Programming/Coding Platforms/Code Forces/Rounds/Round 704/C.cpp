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

// #define left 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;

    if(n==m){
        cout<<1;
        return 0;
    }

    int left[m];
    int right[m];

    int i=0,j=0;
    while(j<n){
        while(s1[j]!=s2[i]){
            j++;
        }
        left[i]=j;
        i++;
        j++;
    }

    i=n-1;
    j=m-1;
    while(i>=0){
        while(s1[i]!=s2[j]){
            i--;
        }
        right[j]=i;
        j--;
        i--;
    }

    int maxx=INT_MIN;

    for(int i=1;i<m;i++){
        maxx=max(maxx,abs(right[i]-left[i-1]));
    }

    cout<<maxx;


    
    return 0;
}