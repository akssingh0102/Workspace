#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        iz(n)
        // vi a;
        unordered_map <int,int> mp;
        // int aa[INT_MAX]={};
        forn(n){
            iz(data)
            // a.pb(data);
            mp[data]+=1;
        }
        unordered_map <int,int> mp1;
        for(auto i: mp){
            mp1[i.second]+=1;
        }
        int res=INT_MIN,maxxi=INT_MIN;

        for(auto i:mp1){
            if(i.second>maxxi){
                maxxi=i.second;
                res=i.first;
            }
            else if(maxxi==i.second){
                if(res>i.first){
                    res=i.first;
                }
            }
        }
        cout<<res<<endl;
    }   
}