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
        iz2(n,m)
        int a[n][m];
        int minn=INT_MAX;
        int sum=0;
        int nev_count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
                minn=min(minn,abs(a[i][j]));
                sum+=abs(a[i][j]-0);
                if(a[i][j]<0){
                    nev_count++;
                }
            }
            
        }
       
       bool check=false;
    //    cout<<minn;
       if(minn==0  || (nev_count%2==0)){
           cout<<sum<<endl;
       }
       else{
            sum=0;
            
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {

                   if(abs(a[i][j])==(minn) && check==false){
                       check=true;
                       if(a[i][j]<0){
                           sum+=a[i][j];
                       }
                       else{
                        sum-=a[i][j];
                        }
                   }
                   else{
                    sum+=abs(a[i][j]);
                   }
                }
                
            }
            cout<<sum<<endl;
       }
       
        
        
    }
    return 0;
}