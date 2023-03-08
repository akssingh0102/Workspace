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


void DFS(int i, vector <int> adj[],vector<bool> &vis, set<int> &s)
    {
        if (vis[i]) return;
        vis[i] = true;
        s.insert(i);
        
        for (auto j:adj[i])
        {
            if (!vis[j]) DFS(j, adj, vis, s);
        }
    }





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout<<" a";
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    // cout<<"P";
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        // insertNode(a,b,adj);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int k;
    cin>>k;
    set<int> s;
    vector<bool>visited((n+1),false);
    // cout<<"aaaa";
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]){
            DFS(i,adj,visited,s);
        }
        // cout<<s.size()<<endl;
        if((int)(s.size())==k){
            for (auto it = s.begin(); it!=s.end(); ++it){
                cout<<*it<<" ";
            }
                             
        cout<<endl;
        s.clear();
        }
        s.clear();
    }
    
    
    
    return 0;
}