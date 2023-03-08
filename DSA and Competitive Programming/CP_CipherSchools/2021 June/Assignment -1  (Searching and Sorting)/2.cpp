// Peak Element 

//https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
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

void sol(int *arr,int &n){
    if(n==1){ 
        cout<<arr[0]<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        
        if(i == 0){
            if(arr[i+1]< arr[i]) cout<<arr[i]<<" ";
        }
        else if(i == n-1){
            if(arr[i-1] < arr[i]) cout<<arr[i]<<" ";
        }
        else{
            if(arr[i] > arr[i+1] && arr[i]>arr[i-1] ) cout<<arr[i]<<" ";
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

    int arr[]={10, 20, 15, 2, 23, 90, 67};
    int n=sizeof(arr)/sizeof(arr[0]);

    sol(arr,n);
    
    
    return 0;
}