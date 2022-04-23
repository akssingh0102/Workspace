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



class Graph
{
    int V;    
    list<int> *adj;    
public:
    Graph(int V);  
    void addEdge(int v, int w); 
    bool isReachable(int s, int d); 
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
    adj[w].push_back(v);
}
 

bool Graph::isReachable(int s, int d)
{
    
    if (s == d)
      return true;
 
    
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    
    list<int> queue;
 
    
    visited[s] = true;
    queue.push_back(s);
 
    
    list<int>::iterator i;
 
    while (!queue.empty())
    {
        
        s = queue.front();
        queue.pop_front();
 
        
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            
            if (*i == d)
                return true;
 
           
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
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
     
     int n,m;
     cin>>n>>m;
    Graph g(n);

    while (m--)
    {
        iz2(a1,a2)
        g.addEdge(a1,a2);
    }
   
 
    int q;
    cin>>q;
    while(q--){
        iz2(a1,a2)
        if(g.isReachable(a1,a2)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
 
    return 0;
}
