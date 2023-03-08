#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<int>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;

// int calc(int n){
//     int sum=n;
//     if(n<=2){
//         return 0;
//     }


//     return sum+calc(n/2);
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        int n;
        cin>>n;
        int m=n;
        while(m){
            iz(a)
            iz(b)
            m--;
        }
        int res=0;
        while(n>2){
            res+=n;
            n=n/2;
        }
        cout<<res<<endl;
    }
}