// Search in sorted matrix  

// https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/


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

    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };

    
    int n=4;
    int x=29;  //element to be found

    if (n == 0){
        cout<<"Not found";
        return 0;
    }
        
   
    int smallest = mat[0][0], largest = mat[n - 1][n - 1];
    if (x < smallest || x > largest){
        cout<<"Not found";
        return 0;
    }
        
   
    // set indexes for top right element
    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << "Found at "
                 << i << ", " << j;
            return 0;
        }
        if (mat[i][j] > x)
            j--;
       
        else
            i++;
    }
 
    cout << "Element not found";
    
    return 0;
}