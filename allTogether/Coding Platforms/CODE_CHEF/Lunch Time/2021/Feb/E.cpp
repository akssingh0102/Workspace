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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    com{
        int n;
        cin>>n;
        int less[n];
        int more[n];
        // int arr[n];
        take(a,n)
        int lesss,moree;
        lesss=a[0];
        moree=a[n-1];

        for (int i = 0; i < n; i++)
        {
            lesss=min(lesss,a[i]);
            less[i]=lesss;
        }
        for (int i = n-1; i >=0; i--)
        {
            moree=max(a[i],moree);
            a[i]=moree;
        }

        bool flag=true;
        for (int i = 1; i < n; i++)
        {
            if(a[i]<=a[i-1]){
                if( (more[i]>a[i-1]) || (less[i-1] < a[i]) ){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        

    }
    
    
    return 0;
}