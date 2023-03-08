// Find first and last positions of an element in a sorted array

//https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

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

int firstOccurance(int *arr,int &n,int &x){
    int l,r;
    l=0;
    r=n-1;
    int res=-1;
    while(l<=r){
        int mid = l + (r-l)/2;

        if(arr[mid] > x){
            r=mid-1;
        }
        else if(arr[mid] < x){
            l=mid+1;
        }
        else{
            res=mid;
            r=mid-1;
        }
    }
    return res;
}

int lastOcuurance(int *arr,int &n,int &x){
    int l,r;
    l=0;
    r=n-1;
    int res=-1;
    while(l<=r){
        int mid = l + (r-l)/2;

        if(arr[mid] > x){
            r=mid-1;
        }
        else if(arr[mid] < x){
            l=mid+1;
        }
        else{
            res=mid;
            l=mid+1;
        }
    }
    return res;
}

pair<int,int> occurance(int *arr,int &n,int &x){

    int f = firstOccurance(arr,n,x);
    int l = lastOcuurance(arr,n,x);

    return make_pair(f,l);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int arr[]={1, 3, 5, 5, 5, 5, 67, 123, 125};   //given array
    int x = 5;  // given  element 
    pair<int,int> res;
    int n = sizeof(arr)/sizeof(arr[0]);
    res = occurance(arr,n,x);

    cout<<res.first<<" "<<res.second<<endl;
    return 0;
}