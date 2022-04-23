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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{
        iz(n)
        take(a,n)
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        vi b;
        for (int i = 0; i < n; i++)
        {
            b.pb(0);
        }
        
        for (int i = 0; i < n; i++)
        {
            int curr_sum=0;
            for (int j = i; j < n; j++)
            {
                curr_sum+=a[j];
                if(curr_sum%(sum-curr_sum)==0){
                    for (int k = i; k <= j  ; k++)
                    {
                        b[k]=1;
                    }
                    for (int k = 0; k < n; k++)
                    {
                        if(b[k]!=1){
                            b[k]=-1;
                        }
                    }
                    break;
                    
                }
                else if(((sum-curr_sum)%curr_sum)==0){
                     for (int k = i; k <= j  ; k++)
                    {
                        b[k]=-1;
                    }
                    for (int k = 0; k < n; k++)
                    {
                        if(b[k]!=-1){
                            b[k]=1;
                        }
                    }
                    
                    break;
                }
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        
        
        
    }
    return 0;
}