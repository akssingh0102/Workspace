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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> arr(n+1,0);

        for(int i=1;i<=n;i++){
            if(s[i-1]=='0'){
                arr[i] = 0;
            }
            else{
                arr[i] = 1;
            }
        }
        int i=1;
        int count = 0;
        while(i<=n){
            if(arr[i]==1){
                count++;
                if(i==n)break;
                // arr[i+1] += arr[i];
                // i++;
                int dist = 0;
                while(i<=n && dist<=k){
                    if(arr[i]==1)dist=0;
                    // else dist++;
                    if(dist==k){
                        if(i!=n && arr[i+1]==1){
                            arr[i] = 1;
                            arr[i+1] = 0;
                            dist = 0;
                        }
                    }
                    dist++;
                    i++;
                }
                if(i==n)break;
                // i--;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}