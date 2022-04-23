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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,a,b,common;
        cin>>n>>a>>b>>common;
        if(a==b && a!=b){
            cout<<"Case #"<<i+1<<"# "<<"IMPOSSIBLE";
        }
        else if((a+b)>(n-common)){
            cout<<"Case #"<<i+1<<"# "<<"IMPOSSIBLE";
        }
        else{
            int a_see,a_notsee,b_see,b_notsee;
            a_see=a;
            a_notsee=((n-(b))+common)-a;
            b_see=b;
            b_notsee=((n-a)+common)-b;

            int ress=((a+b)-common)+a_notsee+b_notsee;
            if(ress!=n){
                 cout<<"Case #"<<i+1<<"# "<<"IMPOSSIBLE";
            }
            else{
                for(int j=0;j<)
            }
        }
    }
    
}