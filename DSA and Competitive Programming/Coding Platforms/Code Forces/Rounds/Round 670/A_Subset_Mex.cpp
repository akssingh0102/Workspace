#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    com{
        iz(n)
        int a[101]={};
        forn(n){a[i]=0;}
        for (int i = 0; i < n; i++)
        {
            int data;
            cin>>data;
            a[data]+=1;
        }
        int counti=0;
        for (int i = 0; i < 101; i++)
        {
            if(a[i]!=0){
                counti++;
            }
            else
            {
                break;
            }
            
        }
        int f=0,s=0;
        // forn(101){cout<<a[i]<<" ";}
        cout<<endl;
        for (int i = 0; i < 101; i++)
        {
            if(a[i] > 1){
                f++;
            }
            else
            {
                break;
            }
            
        }
        for (int i = 0; i < 101; i++)
        {
            if(a[i] > 0){
                s++;
            }
            else break;
        }
        int res=(f+s);
        // cout<<f<<" "<<s<<" "<<res<<endl;
        res=max(res,counti);
        cout<<res<<endl;
        
        
        
    }
    return 0;
}