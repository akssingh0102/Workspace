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

bool check(ll mac, ll workers, ll price, ll target, ll rounds) {
    if (mac >= (target+workers-1)/workers) return true;
    ll cur = mac*workers;
    rounds--;
    if (rounds == 0) return false;
    while (1) {
        ll rem = target - cur;
        ll rnds = (rem + mac*workers - 1) / (mac*workers);
        if (rnds <= rounds) return true;
        if (cur < price) {
          rem = price - cur;
          rnds = (rem + mac*workers - 1) / (mac*workers);
          rounds -= rnds;
          if (rounds < 1) return false;
          cur += rnds * mac * workers;
        }
        cur -= price;
        if (mac > workers) {
          workers++;
        } else {
          mac++;
        }
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
    
    cin.tie(0);
    ll m, w, p, n;
    cin >> m >> w >> p >> n;
    ll a = 1, b = 1000000000000LL;
    while (a < b) {
        ll mid = (a + b) >> 1;
        if (check(m, w, p, n, mid)) {
          b = mid;
        } else {
          a = mid + 1;
        }
    }
    cout << a << "\n";
    return 0;
}