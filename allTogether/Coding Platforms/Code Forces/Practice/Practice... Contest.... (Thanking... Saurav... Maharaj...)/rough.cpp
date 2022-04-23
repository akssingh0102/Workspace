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
    iz(n)
    vi a;
    forn(n){
        iz(data)
        a.pb(data);
    }
    int beg,mid,end;
    beg=mid=end=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=a[0]){
            mid=i;
            int j=i;
            while(a[i]==a[j] && j<n)j++;
            end=j;
        }
    }
    if(end==n){
        if((mid-beg)==(end-mid)){
            cout<<(2*(mid-beg));
            return 0;
        }
    }
    int res=INT32_MIN;
    if((mid-beg)==(end-mid)){
            res=max(res,(2*(mid-beg)));
            beg=mid;
            mid=end;
        }
        
    for (int i = end+1; i < n; i++)
    {
        if(a[i]!=a[i-1])
        {
            end=i;
            beg=mid;
            mid=end;
        if((mid-beg)==(end-mid)){
            res=max(res,(2*(mid-beg)));
            
        }
        }

    }
            
            beg=mid;
            mid=end;
            end=n;
        if((mid-beg)==(end-mid)){
            res=max(res,(2*(mid-beg)));
            
        }
    
    cout<<res;
    return 0;
       

}