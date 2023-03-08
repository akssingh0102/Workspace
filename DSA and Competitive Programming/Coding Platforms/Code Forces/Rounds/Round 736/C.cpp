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
// #define pq                  priority_queue <int, vector<int>, greater<int> >
#define INF                 INT_MAX

typedef pair<int, int> iPair;

class AdjListNode 
{ 
	int v; 
	int weight; 
public: 
	AdjListNode(int _v, int _w) { v = _v; weight = _w;} 
	int getV()	 { return v; } 
	int getWeight() { return weight; } 
}; 

class Graph{

    int V;
    unordered_set<int> *ajj;                                  //number of Vertices
    vector<int> *adj;                               //adjacency list
    vector<AdjListNode> *adjw;                      //adjacency list with weight

    public:
    Graph(int v){                           //Constructor
        this->V=v;
        adj = new vector<int>[V]; 
        adjw = new vector<AdjListNode>[V];
        ajj = new unordered_set<int>[V];
    }

    void addEdgeDir(int v,int u){           //add directed edges
        adj[v].push_back(u);
    }

    void addEdge(int v,int u){              //add non-directed edge
        adj[v].push_back(u);
        adj[u].push_back(v);
        // ajj[v].
    }

    void addwEdge(int u,int v,int weight){    // add weighted edges
        AdjListNode node(v, weight); 
	    adjw[u].push_back(node); 
        adj[u].push_back(v);
    }

     void BFSUtil(int u,vector <bool> &visited){
        visited[u]=true;
        queue<int> q;

        q.push(u);

        while (!q.empty())
        {
            int uu=q.front();
            q.pop();
            cout<<uu<<" ";
            for(auto X:adj[uu]){
                if(!visited[X]){
                    visited[X]=true;
                    q.push(X);
                }
            }
        }        

    }

    int BFSdis(int u){                      
        vector <bool> visited(V+1,false);
        visited[u]=true;
        int count=0;
        BFSUtil(u,visited);
        for (int i = 0; i < V; i++)
        {
            if(!visited[i]){
                count++;
                BFSUtil(i,visited);
            }
        }
        return count;
        
    }

    void rem(int u,int v){

    }

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m;
    cin>>n>>m;

    Graph g(n);
    while(m--){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        g.addEdge(a,b);
    }
    int query;
    cin>>query;
    while(query--){
        int option,u,v;
        cin>>option;

        switch (option)
        {
        case 1:
            cin>>u>>v;
            u--; v--;
            g.addEdge(u,v);
            break;
        case 2:
            cin>>u>>v;
            u--; v--;
            g.rem(u,v);

            break;
        case 3:
            cout<<g.BFSdis();
            break;
        default:
            break;
        }
    }

}