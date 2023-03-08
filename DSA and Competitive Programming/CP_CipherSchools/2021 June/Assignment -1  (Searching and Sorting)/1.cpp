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

int candidateEle(vector<int> &arr,int n){
    int ele=arr[0];
    int count =1;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==ele) count++;
        else count--;

        if(count==0) ele=arr[i];
    }
}

void sol(){
    int n;
    cin>>n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        arr.push_back(data);
    }
  
    int candidate=candidateEle(arr,n);

    int count=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == candidate) count++;
    }
    
    if(count > n/2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    sol();
    return 0;
}