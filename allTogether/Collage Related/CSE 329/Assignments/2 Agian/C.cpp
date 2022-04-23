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
 

pair<int,int> ccheck(int n, int p)  
{ 
    unordered_set <int> ss;
    int maximum = -1; 
      
    while (!(n % 2))  
    { 
        ss.insert(2);
        maximum = max(maximum, 2); 
        n = n/2; 
    } 
  
    for (int i = 3; i <= sqrt(n); i += 2) 
    { 
        while (n % i == 0)  
        {    
            ss.insert(i);
            maximum = max(maximum,i);  
            n = n / i; 
        } 
    } 
  
    if (n > 2) {
maximum = max(maximum, n); 
ss.insert(n);
    }
        
      pair <int,int> aa;
      aa.second=ss.size();
      if((maximum <= p)){
          aa.first=1;
      }
      else
      {
          aa.first=0;
      }
      
    return aa; 
} 


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    iz2(n,p)
    take(a,n);
    int res=INT_MIN,high=INT_MIN,num=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        pair <int,int> aa;
        aa=ccheck(a[i],p);
        // int mm=ccheck(a[i],p);
        if(aa.first && (aa.second)>=high){
            if(aa.second==high && res<a[i]){
                 res=a[i];
            num=max(num,a[i]);
            high=aa.second;
            }
             else if(aa.second > high){
                  res=a[i];
            num=max(num,a[i]);
            high=aa.second;
             }
            
            
           
        }
        
    }
    if(res==INT_MIN){
        cout<<-1;
    }
    else
    cout<<res;
    
    return 0;
}