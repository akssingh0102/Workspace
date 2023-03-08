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
#define mod                 1000000007


string super_digit(string s)
 {
 
    
    if(s.size()==1)
     {
     return s;   
    }
    
    long long sum=0;
    
    long long  num;
    
    for(long long i=0;i<s.size();i++)
        {
        
        num=s[i]-'0';
        sum=sum+num;
    }
    
   return( super_digit(std::to_string(sum)));
    
    
    
}


int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string n;
    string k;
     
    cin>>n>>k;
    
    long long sum=0;

    int size= std::stoi(k);
    
    
    long long i=0;
    int num;
    for(;i<n.size();i++)
    {
        
        num=n[i]-'0';
        sum=sum+num;
        
    }
    
    cout<<super_digit(std::to_string(sum*size));
    
    return 0;
}