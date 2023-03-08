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

void addEdge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void printGraph(vector<int> adj[]){
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"For Node :"<<i<<endl;
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<"->";
        }
        cout<<endl<<endl;
    }
    
}

void BFS(vector<int> adj[]){
    queue<int>q;
    bool visited[5];
    for (int i = 0; i < 5; i++)
    {
        visited[i]=false;
    }
    
    q.push(0);
    visited[0]=true;
    while(q.size()){
        
            // visited[q.front()]=true;
        int curr=q.front();
        q.pop();

        cout<<curr<<" ";
        for(int i=0;i<adj[curr].size();i++){
            if(visited[adj[curr][i]]==false){
                q.push(adj[curr][i]);
            visited[adj[curr][i]]=true;
            }
        }
        
        
    }
}

void DFS(vector<int> adj[]){
    // queue <int> q;
    stack<int>s;
    bool visited[5];
    for (int i = 0; i < 5; i++)
    {
        visited[i]=false;
    }
    
    
    s.push(0);
    visited[0]=true;
    while(s.size()){
        int curr=s.top();
        s.pop();
        cout<<curr<<" ";
        visited[curr]=true;
        for (int i = 0; i < adj[curr].size(); i++)
        {
            if(visited[adj[curr][i]] == false){
                s.push(adj[curr][i]);
                visited[adj[curr][i]]=true;
            }
        }
        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> adj[5];

    // addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    // addEdge(adj,2,0);
    addEdge(adj,2,1);
    addEdge(adj,2,4);
    addEdge(adj,2,3);
    addEdge(adj,3,0);


    printGraph(adj);
    cout<<endl<<endl;
    BFS(adj);
    cout<<endl;
    DFS(adj);
    
    return 0;
}