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
        // 
        ll a,b,count=0,m,maxx;
        // int count=0;
        // int m;
        cin>>a>>b;
        maxx=max(a,b);
        if(a==maxx){
            m=b;
        }
        else m=a;
        // while(m<maxx){
        //     m+=10;
        //     count++;
        // }
        ll dif=(maxx-m);
        count=(dif/10);
        ll rem=0;
        rem =(dif%10);
        if(rem!=0)
        cout<<count+1<<endl;
        else
        {
            cout<<count<<endl;
        }
        
        
    }
    return 0;
}