#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
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

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        iz2(n,k)
        vc a;
        string s;
        cin>>s;
        forn(n){
            a.pb(s[i]);
        }
        for (int i = 0; i < k; i++)
        {
            if(a[i]=='?'){
                char temp='?';
                for (int j = i; j < n; j=j+k)
                {
                    if(a[j]!='?'){
                        temp=a[j];
                        break;
                    }
                }
                for (int j = i; j < n; j=j+k)
                {
                    if(a[j]=='?'){
                        a[j]=temp;
                    }
                }
                
                
            }
            else{
                for (int j = i; j < n; j=j+k)
                {
                    if(a[j]=='?'){
                        a[j]=a[i];
                    }
                }
                
            }
        }
        bool flag=true;
        int one=0,zero=0;
        for (int i = 0; i < k; i++)
        {
            if(a[i]=='1') one++;
            else if(a[i]=='0') zero++;
            for (int j = i; j < n; j=j+k)
            {
                if(a[j]!=a[i]){
                    flag=false;
                }
            }
            
        }
        // forn(n){
        //     cout<<a[i];
        // }
        // cout<<endl;
        if(flag && (zero<=(k/2) && one<=(k/2))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
        
    }
    return 0;
}