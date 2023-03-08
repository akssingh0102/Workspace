//                              Majority Element
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


int findCandididate(vector<int> &ele){
    int candidate=ele[0];
    int count=1;
    for (int  i = 0; i < ele.size(); i++)
    {
        if(ele[i]==candidate){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            candidate=ele[i];
        }
    }
    return candidate;

}

int majorityElement(vector <int> &ele){
    int res=findCandididate(ele);
    int count=0;
    for (int i = 0; i < ele.size(); i++)
    {
        if(ele[i]==res){
            count++;
        }
    }
    if(count > ((ele.size())/2)){
        return res;
    }
    else{
        return -1;
    }
    
}

int main(){
    // vector<int> ele = { 1, 1, 2, 1, 3, 5,1};
  
    return 0;
}