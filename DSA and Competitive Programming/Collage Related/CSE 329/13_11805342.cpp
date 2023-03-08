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
        ll n;
        cin>>n;
        vector <ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll data;
            cin>>data;
            if(v.empty()){
                v.pb(data);
            }
            else{
                ll j;
                for (j = 0; j < v.size(); j++)
                {
                    if(data<v[j]){
                        v[j]=data;
                        break;
                    }
                }
                if(j==v.size()){
                    v.pb(data);
                }
            }
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<" ";
        for (ll i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
        

    }   
}