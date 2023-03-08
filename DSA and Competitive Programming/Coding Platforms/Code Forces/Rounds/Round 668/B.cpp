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
#define iz2(n,m)             int n,m; cin>>n>>m;
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
        vector <ll> a;
        
        for (int i = 0; i < n; i++)
        {
            ll data;
            cin>>data;
            a.pb(data);
        }
        ll pos_sum=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>0){
                pos_sum+=a[i];
            }
            else if(a[i]<0){
                if(pos_sum>=abs(a[i])){
                    
                    pos_sum+=a[i];
                    a[i]=0;
                }
                else{
                    a[i]+=pos_sum;
                    pos_sum=0;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        
        ll res=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] < 0){
                res+=a[i];
            }
        }

        cout<<abs(res)<<endl;
        
        
        
    }
    return 0;
}