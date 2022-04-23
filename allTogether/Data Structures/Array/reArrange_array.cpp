// Given an array arr[] of size N where every element is in the range from 0 
// to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

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

class Solution{
    public:
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        int i;
        
        //Increasing all values by (arr[arr[i]]%n)*n to store the new element.
        for(i=0;i<n;i++){
            arr[i]+=(arr[arr[i]]%n)*n;
        }
        
        //Since we had multiplied each element with n.
        //We will divide by n too to get the new element at that 
        //position after rearranging.
        for(i=0;i<n;i++){
            arr[i]=arr[i]/n;
        }
    }

    void printSolution(long long *arr , int &n){
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    Solution s;
    long long arr[] = {4 ,0 ,2 ,1 ,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // cout<<

    // s.arrange(arr,n);
    int i;
        
        //Increasing all values by (arr[arr[i]]%n)*n to store the new element.
        for(i=0;i<n;i++){
            arr[i]+=(arr[arr[i]]%n)*n;
        }
        
        //Since we had multiplied each element with n.
        //We will divide by n too to get the new element at that 
        //position after rearranging.
        for(i=0;i<n;i++){
            arr[i]=arr[i]/n;
        }
    s.printSolution(arr,n);
    
    return 0;
}