//Segregate 0s and 1s in an array

//https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/


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

void seg(int *arr,int &n){
    int _0,_1;
    _0=_1=0;
    while(_1 < n){
        if(arr[_1] == 0){
            swap(arr[_1],arr[_0]);
            _0++;
            _1++;
        }
        else if(arr[_1] == 1){
            _1++;
        }
}
}

void print(int *arr, int &n)
{
    cout << "Array after segregation is "<<endl;
 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int arr[] = { 0, 1, 0, 1, 1, 1 , 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
     
    seg(arr, n);
    print(arr, n);
    
    return 0;
}