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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    com{
        // cout<<t;
        int n;
        cin>>n;
        vector<ll> a;

        for(int i=0;i<n;i++){
            ll data ;
            cin>>data;
            a.pb(data);
        }
        sort(a.begin(),a.end());
        ll aa,bb;
        bool flag = false;
        aa=a[0]+a[1];
        bb=a[n-1];
        int i,j;
        i=1;
        j=n-1;
        

       while(i<j){
        //    cout<<"A"<<endl;
           if((i+1)>(n-j) && (bb>aa)){
            //    cout<<"Break";
               flag = true;
               break;
           }
           else if(aa >= bb){
            //    cout<<"aa > bb";
               j--;
               if(j==i) break;
               bb += a[j];
           }
           else if((i+1)<=(n-j)){
            //    cout<<"(i+1)<=(n-j)";
               i++;
               if(j==i) break;
               aa += a[i];
           }        
       }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    
    return 0;
}