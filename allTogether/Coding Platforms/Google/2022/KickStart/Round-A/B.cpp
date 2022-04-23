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

// #define ten_1 10
// #define ten_2 100
// #define ten_3 1000
// #define ten_4 10000
// #define ten_5 100000
// #define ten_6 1000000
// #define ten_7 10000000
// #define ten_8 100000000

// #define int arr[] = {10,100,1000,10000,100000,1000000,10000000,100000000};

int countDigit(long long int n){
    
    ll count = 0;
    while(n){
        n /= 10;
        count++;
    }
    return count;
}

long long int checkIf(long long int n,long long int j){   
    ll count = countDigit(n);
    ll arr[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000, 1000000000};

    ll res = INT_MAX;
    // bool doo = false;
    if(j==0){
        ll ii = 1;
        for(ll i=0;i<count;i++ , ii=ii*10){
        
        ll temp = n%ii;
        ll temp2 = n/ii;
        temp = (j*ii) + temp;
        temp2 = (temp2*(ii*10)) + temp;
        
        if(temp2%9 == 0){
            res = min(temp2, res);
        }
    }
    }
    else{
     ll ii = 1;
        for(ll i=0;i<=count;i++ , ii=ii*10){
        
        ll temp = n%ii;
        ll temp2 = n/ii;
        temp = (j*ii) + temp;
        temp2 = (temp2*(ii*10)) + temp;
        
        if(temp2%9 == 0){
            res = min(temp2, res);
        }
    }
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

    int t;
    cin>>t;
    for(int testCase=1;testCase<=t;testCase++){
        ll n;
        cin>>n;
        ll res = INT_MAX;
        for(int i=0;i<=9;i++){
            res = min(res , checkIf(n,i));
        }
        
        cout<<"Case #"<<testCase<<": ";
        cout<<res<<endl;
    }
    return 0;
}