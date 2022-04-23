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

pair<int,int> primeFactors(int n,int pp)  
{  
    pair<int,int> p;
    int factor[n];
    unordered_set <int> s;
    int high=INT_MIN;
    for (int i = 0; i < n; i++)
        {
            factor[i]=0;
            
        }
   
    while (n % 2 == 0)  
    {  
        high=max(high,2);
        s.insert(2);
        factor[2]++;
        n = n/2;  
    }  
  
    
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
          
        while (n % i == 0)  
        {  
            high=max(high,i);
            factor[i]++;
            s.insert(i);
            n = n/i;  
        }  
    }  
 
    if (n > 2){
        factor[n]++;
        s.insert(n);
        high=max(high,n);
    }
    if(high<=pp){
        p.first=high;
    }
    else
    {
        p.first=-1;
    }
    
    // p.first=high;
    p.second=s.size();
    return p;
        
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    iz(n)
    iz(p)
    take(a,n)
    int high=1,res=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        pair <int,int> pa;
        pa=primeFactors(a[i],p);
        if(pa.first!=-1){
            if(pa.second>=high){
                res=max(res,a[i]);
            }
        }
    }
    cout<<res<<endl;
    
    

    return 0;
}