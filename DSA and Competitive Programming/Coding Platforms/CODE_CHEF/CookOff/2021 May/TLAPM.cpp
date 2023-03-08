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
int matrix[1005][1005];

void infiniteMatrix()
{   
    for(int i = 1;  i <= 1000;  i++)
    {
        matrix[i][1] = i * (i+1)/2;
        for(int j = 2;  j <= 1000;  j++)
        {
            matrix[i][j] = matrix[i][j-1] + (j - 1) + (i - 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

    infiniteMatrix();

    int t;
    cin >> t;
    while(t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = 0;
        for(int i = x1;  i <= x2;  i++)
        {
            sum += matrix[i][y1];
        }
        for(int i = y1+1;  i <= y2;  i++)
        {
            sum += matrix[x2][i];
        }

        cout << sum << "\n";
    }
}