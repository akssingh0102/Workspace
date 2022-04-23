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
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> a;
    ll max=INT_MIN,max_2=INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll data;
        cin>>data;
        a.pb(data);
        if(a[i]>=max) {
            max_2=max;
            max=a[i];            
        }
        else if(a[i]>max_2)  max_2=a[i];
        
    }
    // cout<<"Max ="<<max<<endl<<"Max_2="<<max_2<<endl;
    // ll count=1,res=0;
    // for (ll i = 0; i < m; i++)
    // {
    //     if(count<=k){
    //         res+=max;
    //         count++;
    //     }
    //     else{
    //         res+=max_2;
    //         count=1;
    //     }
    // }
    ll res=((max*k)+max_2)*(m/(k+1));
    m=(m%(k+1));
    res+=(m*(max));
    cout<<res;
    
    
    
}