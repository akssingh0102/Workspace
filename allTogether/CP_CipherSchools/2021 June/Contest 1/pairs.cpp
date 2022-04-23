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


int pairs(vector < int > a,int k) {
   int ans = 0;
    map<int, int> nn;
    for(int i=0;i<a.size();i++) {
        nn[a[i]] = 1;
    }
    for(int i=0;i<a.size();i++) {
        if ( nn.find(a[i]-k) == nn.end() ) {
          
        } else {
          ans++;
        }   
    }
    return ans;
}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    
    cin >> n >> k;


    vector<long long> nn(n);
    for(int i=0;i<n;i++){ 
        cin >> nn[i];
    }
    
    sort(nn.begin(), nn.end());
    
    int count = 0;
    for(int i=0;i<n;i++){
     if(binary_search(nn.begin(), nn.end(), nn[i]+k)) count++;
    }
    cout << count << endl;
}
