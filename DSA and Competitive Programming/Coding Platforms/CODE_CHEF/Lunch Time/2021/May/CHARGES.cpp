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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        take(a,k)
        int dis=0;
        vi aa;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                aa.pb(1);
            }
            else{
                aa.pb(0);
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<aa[i]<<" ";
        // }
        
        // cout<<endl;
        
        for (int i = 1; i < n; i++)
        {
            if(s[i]==s[i-1])dis+=2;
            else{
                dis+=1;
            }
        }
        // cout<<dis<<endl;
        for (int i = 0; i < k; i++)
        {
            a[i]=a[i]-1;
            // aa[a[i]]=!aa[a[i]];
            // cout<<aa[i]<<" "<<aa[i+1]<<" ";
            if(aa[a[i]]==1){
                aa[a[i]]=0;
            }
            else{
                aa[a[i]]=1;
            }

            if((a[i]-1) >= 0){
                if(aa[a[i]]==aa[a[i]-1]){
                    dis++;
                    // cout<<dis<<endl;
                }
                else{
                    dis--;
                    // cout<<dis<<endl;
                }
            }
            if((a[i]+1) < n){
                if(aa[a[i]]==aa[a[i]+1]){
                    dis+=1;
                    // cout<<aa[i]<<" "<<aa[i+1];
                    // cout<<",";
                    // cout<<dis<<endl;
                }
                else{
                    dis--;
                    // cout<<dis<<endl;
                }
            }
            cout<<dis<<endl;
        }
        cout<<endl;
        
        

    }
    return 0;
}