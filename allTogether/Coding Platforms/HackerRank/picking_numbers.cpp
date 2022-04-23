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
#define vasc(a)             sort(a.begin(),a.end());
#define vdec(a)             sort(a.begin(),a.end(),greater<int>);

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    iz(n)
    vi a;
    forn(n){
        iz(data)
        a.pb(data);
    }   
    int res=INT_MIN;
    sort(a.begin(),a.end());
    int a_count=0,b_count=0;
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while(a[i]==a[j] && j<n){
            b_count++;
            j++;
        }
        
        res=max(res,(a_count+b_count));
        if(j==n) break;
        i=j-1;
        a_count=b_count;
        b_count=0;
    }
    cout<<res<<endl;

}