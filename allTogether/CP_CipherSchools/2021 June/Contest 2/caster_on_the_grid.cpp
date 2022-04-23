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


void update_d(int N, int grid[][100], int v1, int v2, list< pair<int, int> >& pos)
{
    

    int x, y;
    int dist = grid[v1][v2];
    
    x = v1 + 1;
    y = v2;
    
    while(x < N){
        if(grid[x][y] == -2){
            break;
        }
        else if(grid[x][y] == -1){
            grid[x][y] = dist + 1;
            
            pos.push_back(make_pair(x,y));
        }
        x++;
    }
    
    x = v1-1;
    y = v2;
    while(x >= 0){
        if(grid[x][y] == -2){
            break;
        }
        else if(grid[x][y] == -1){
            grid[x][y] = dist + 1;
            
            pos.push_back(make_pair(x,y));
        }
        x--;
    }
    
    x = v1;
    y = v2 +1;
    while(y < N){
        if(grid[x][y] == -2){
            break;
        }
        else if(grid[x][y] == -1){
            grid[x][y] = dist + 1;
            
            pos.push_back(make_pair(x,y));
        }
        y++;
    }
    
    x = v1;
    y = v2 -1;
    while(y  >= 0){
        if(grid[x][y] == -2){
            break;
        }
        else if(grid[x][y] == -1){
            grid[x][y] = dist + 1;
            
            pos.push_back(make_pair(x,y));
        }
        y--;
    }
    
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int N;
    int grid[100][100];
    char input;    
    list< pair<int,int> > pos;
    pair<int, int> val;
    int ss = 0; 
    int a, b, c, d;
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N; j++){
            cin >> input;
            if(input == '.')
                grid[i][j] = -1;
            else if(input == 'X')
                grid[i][j] = -2;
        }
    }
    
    cin >> a >> b >> c >> d;
    
    if( a==c && b==d){
        cout << ss;
        return 0;
    }
    
    pos.push_back(make_pair(a, b));
    grid[a][b] = 0;
    
    while(!pos.empty()){
        val = pos.front();
        pos.pop_front();
        
        if((val.first == c) && (val.second == d)){
            ss = grid[val.first][val.second];
            break;
        }
        
        update_d(N, grid, val.first, val.second, pos);
        
    }
    

    cout << ss ;
    
    return 0;
}