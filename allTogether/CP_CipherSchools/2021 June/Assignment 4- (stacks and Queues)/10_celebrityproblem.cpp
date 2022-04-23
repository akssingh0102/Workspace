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

#define N 8

bool MATRIX[N][N] = {{0, 0, 1, 0},
                     {0, 0, 1, 0},
                     {0, 0, 0, 0},
                     {0, 0, 1, 0}};

bool knows(int a, int b)
{
    return MATRIX[a][b];
}

int findCelebrity(int n)
{
    stack<int> s;

    int C;

    for (int i = 0; i < n; i++)
        s.push(i);

    int A = s.top();
    s.pop();
    int B = s.top();
    s.pop();

    while (s.size() > 1)
    {
        if (knows(A, B))
        {
            A = s.top();
            s.pop();
        }
        else
        {
            B = s.top();
            s.pop();
        }
    }
    if (s.empty())
        return -1;

    C = s.top();
    s.pop();

    if (knows(C, B))
        C = B;

    if (knows(C, A))
        C = A;

    for (int i = 0; i < n; i++)
    {
        if ((i != C) &&
            (knows(C, i) ||
             !knows(i, C)))
            return -1;
    }

    return C;
}

int main()
{
    int n = 4;
    int id = findCelebrity(n);
    id == -1 ? cout << "No celebrity" : cout << "Celebrity ID " << id;
    return 0;
}