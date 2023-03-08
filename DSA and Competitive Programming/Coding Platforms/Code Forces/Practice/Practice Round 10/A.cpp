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
    ll a[6];
    ll sum=0;
    for (int i = 0; i < 6; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    bool res=false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if((a[i]+a[j]+a[k])==sum-(a[i]+a[j]+a[k])){
                    res =true;
                }
            }
            
        }
        
    }
    if(res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
       
}