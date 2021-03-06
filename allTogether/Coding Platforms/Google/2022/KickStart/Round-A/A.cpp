#include<bits/stdc++.h>
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

        string i;
        string s;
        cin>>i;
        cin>>s;

        int l,r;
        l = r =0;
        while(l<i.length() && r<s.length()){
            if(i[l] != s[r]) r++;
            else if(i[l] == s[r]){
                l++;
                r++;
            }
        }
        bool flag = false;
        if(l==i.length()){  
            flag = true;
        }
        

        cout<<"Case #"<<testCase<<": ";
        if(flag)cout<<(s.length() - i.length())<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}