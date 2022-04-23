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

    int V;                                  //number of Vertices
    vector<int> *adj;                               //adjacency list
    vector<AdjListNode> *adjw;                      //adjacency list with weight

    public:
    Graph(int v){                           //Constructor
        this->V=v;
        adj = new vector<int>[V]; 
        adjw = new vector<AdjListNode>[V];
    }

    void addEdgeDir(int v,int u){           //add directed edges
        adj[v].push_back(u);
    }

    void addEdge(int v,int u){              //add non-directed edge
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    void addwEdge(int u,int v,int weight){    // add weighted edges
        AdjListNode node(v, weight); 
	    adjw[u].push_back(node); 
        adj[u].push_back(v);
    }



    void print(){
        for (int i = 0; i < V; i++)
        {
            cout<<"For node "<<i<<" ::  ";
            for (int j = 0; j<adj[i].size() ; j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;            
        }        
    }

//***************************** BFS for connected graphs ***************
    void BFS(int x){                        //BFS
        int u;
        u=x;
        vector<bool>visited(V,false);                                                                                                                
        queue<int> q;

        q.push(u);
        visited[u]=true;

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
//***************************** BFS for disconnected graphs ***************

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

    void BFSdis(int u){                      
        vector <bool> visited(V+1,false);
        visited[u]=true;
        BFSUtil(u,visited);
        for (int i = 0; i < V; i++)
        {
            if(!visited[i])
                BFSUtil(i,visited);
        }
        
    }


//************************************ DFS of Graphs *******************************************
    void DFSRec(int u,vector <bool> &visited){
        visited[u]=true;
        cout<<u<<" ";
        for(auto x:adj[u]){
            if(!visited[x]){
                DFSRec(x,visited);
            }
        }
    }

    void DFS(int u){
        vector <bool> visited(V,false);
        visited[u]=true;
        DFSRec(u,visited);

        for (int i = 0; i < V; i++)
        {
            if(!visited[i]){
                DFSRec(i,visited);
            }
        }                                                                                                                                                                                                                                                                                                                                                                                                                            
    }

//******************************* Cycle Detection **************************
    bool isCyclicHelper(int u,vector<bool> &visited,vector <bool> &recStack){
        visited[u]=true;
        recStack[u]=true;

        for(auto X:adj[u]){
            if((!visited[X]) && (isCyclicHelper(X,visited,recStack)))
                return true;
            else if(recStack[X])
                return true;
        }
        recStack[u]=false;
        return false;
    }

    bool isCyclic(){
        vector <bool> visited(V,false);
        vector <bool> recStack(V,false); 

        for (int i = 0; i < V; i++)
        {
            if(!visited[i]){
                if(isCyclicHelper(i,visited,recStack)){
                    return true;
                }
            }
        }
        return false;
        
    }

//******************************** Topological Sort ****************************

    void topologicalSort() 
{ 
    vector<int> in_degree(V, 0); 
  
    for (int u = 0; u < V; u++) { 
        for (int x:adj[u]) 
            in_degree[x]++; 
    } 
  
    queue<int> q; 
    for (int i = 0; i < V; i++) 
        if (in_degree[i] == 0) 
            q.push(i); 

  
    while (!q.empty()) { 
        int u = q.front(); 
        q.pop(); 
        cout<<u<<" "; 
  
        for (int x: adj[u]) 
            if (--in_degree[x] == 0) 
                q.push(x); 
    } 
}

//*********************************** Shortest Path ***************************
void topologicalSortUtil(int v, bool visited[], stack<int> &Stack) 
{ 
	
	visited[v] = true; 

	// vector<AdjListNode>::iterator i; 
	for (auto i=adjw[v].begin();i<adjw[v].end();i++) 
	{ 
		AdjListNode node = *i; 
		if (!visited[node.getV()]) 
			topologicalSortUtil(node.getV(), visited, Stack); 
	} 

	Stack.push(v); 
} 


void shortestPath(int s)                    // shortest path to every node 
{ 
	stack<int> Stack; 
	int dist[V]; 

	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 
 
	for (int i = 0; i < V; i++) 
		if (visited[i] == false) 
			topologicalSortUtil(i, visited, Stack); 

	for (int i = 0; i < V; i++) 
		dist[i] = INF; 
	dist[s] = 0; 

	while (Stack.empty() == false) 
	{  
		int u = Stack.top(); 
		Stack.pop(); 
 
		// list<AdjListNode>::iterator i; 
		if (dist[u] != INF) 
		{ 
		for (auto i=adjw[u].begin();i<adjw[u].end();i++) 
			if (dist[i->getV()] > dist[u] + i->getWeight()) 
				dist[i->getV()] = dist[u] + i->getWeight(); 
		} 
	} 

	for (int i = 0; i < V; i++) 
		(dist[i] == INF)? cout << "INF ": cout << dist[i] << " "; 
}

// ********************************* Mimimum spannng tree (Prim's Algo) *************************

void primMST(int vv)
{
    // priority queue of pairs
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq; 
 
    int src = vv; // Taking vertex 0 as source
 
    // Create a vector for keys and initialize all
    // keys as infinite (INF)
    vector<int> key(V, INF);
 
    // To store parent array which in turn store MST
    vector<int> parent(V, -1);
 
    // To keep track of vertices included in MST
    vector<bool> inMST(V, false);
 
    // Insert source itself in priority queue and initialize
    // its key as 0.
    pq.push(make_pair(0, src));
    key[src] = 0;
 
    /* Looping till priority queue becomes empty */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum key
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted key (key must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
 
        inMST[u] = true;  // Include vertex in MST
 
        // 'i' is used to get all adjacent vertices of a vertex
        // list< pair<int, int> >::iterator i;
        for (auto i = adjw[u].begin(); i != adjw[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = i->getV();
            int weight = i->getWeight();
 
            //  If v is not in MST and weight of (u,v) is smaller
            // than current key of v
            if (inMST[v] == false && key[v] > weight)
            {
                // Updating key of v
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
 
    // Print edges of MST using parent array
    int ww=0;
    for (int i = 0; i < V; i++)
    {
        ww+=key[i];
    }
    
    for (int i = 1; i < V; ++i)
        printf("%d - %d\n", parent[i], i);

    cout<<endl<<"Total Weight: "<<ww;
}

// ********************   Dijkstra's Shortest Path Algo ********************

void shortestPathDijkstra(int src)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // https://www.geeksforgeeks.org/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);
  
    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;
  
    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
  
        // 'i' is used to get all adjacent vertices of a vertex
        // list< pair<int, int> >::iterator i;
        for (auto i = adjw[u].begin(); i != adjw[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = i->getV();
            int weight = i->getWeight();
  
            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
  
    // Print shortest distances stored in dist[]
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    // Graph g(4);

    // g.addEdgeDir(0,1);
    // // g.addEdgeDir(0,2);
    // g.addEdgeDir(1,2);
    // // g.addEdgeDir(2,0);
    // g.addEdgeDir(2,3);
    // g.addEdgeDir(3,0);

    // // cout<<g.
    // g.print();

    // g.BFS(0);
    // cout<<endl;
    // g.BFSdis(0);
    // cout<<endl;
    // g.DFS(0);
    // cout<<endl;
    // if(g.isCyclic()){
    //     cout<<"Their is a cycle "<<endl;
    // }
    // else{
    //     cout<<"Their is no Cycle"<<endl;
    // }

    // Graph gg(6);
    // gg.addwEdge(0, 1, 2); 
	// gg.addwEdge(0, 4, 1); 
	// gg.addwEdge(1, 2, 3); 
	// gg.addwEdge(4, 2, 2); 
	// gg.addwEdge(4, 5, 4); 
	// gg.addwEdge(2, 3, 6); 
	// gg.addwEdge(5, 3, 1);

    // int s = 0; 
	// cout << "Following are shortest distances from source " << s <<" \n"; 
	// gg.shortestPath(s); 

    Graph g(9);
    g.addwEdge(0, 1, 4);
    g.addwEdge(0, 7, 8);
    g.addwEdge(1, 2, 8);
    g.addwEdge(1, 7, 11);
    g.addwEdge(2, 3, 7);
    g.addwEdge(2, 8, 2);
    g.addwEdge(2, 5, 4);
    g.addwEdge(3, 4, 9);
    g.addwEdge(3, 5, 14);
    g.addwEdge(4, 5, 10);
    g.addwEdge(5, 6, 2);
    g.addwEdge(6, 7, 1);
    g.addwEdge(6, 8, 6);
    g.addwEdge(7, 8, 7);

    g.primMST(0);
    cout<<endl;
    g.shortestPathDijkstra(0);

    




    
    
    return 0;
}