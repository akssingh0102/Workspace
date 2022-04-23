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
        string s;
        cin>>s;
        int a[26]={0};
        for (int i = 0; i < s.length(); i++)
        {
            a[s[i]-'a']++;
        }
        ll odd,even;
        // for (int i = 0; i < 26; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        odd=even=0;
        for (int i = 0; i < 26; i++)
        {
            if(a[i]>0){
                if(a[i]%2==0){
                    even+=(a[i]/2);
                }
                else{
                    even+=(a[i]/2);
                    odd++;
                }
            }
        }
        // cout<<"odd:"<<odd<<" even:"<<even<<endl;
        if(even >= (odd)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}