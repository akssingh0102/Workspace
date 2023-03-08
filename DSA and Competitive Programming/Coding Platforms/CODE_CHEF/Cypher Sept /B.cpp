#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
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
        string s;
        cin>>s;
        int low=INT_MAX,high=INT_MIN;
        unordered_set <int> se;
        unordered_set <int> check;
        for (int i = 0; i < s.length(); i++)
        {
            se.insert(s[i]-'a');
        }

        unordered_map <int,int> c;
        
        for (int i = 0; i < se.size(); i++)
        {
            c[s[i]-'a']++;
        }

        bool flag=true;

        if(c.size()==se.size()){
                for (int i = 0; i < se.size(); i++)
                {
                    cout<<(int)(s[i]-'a')+1;
                }
                cout<<endl;
                flag=false;
            }

        int l=INT_MAX,h=INT_MIN;
        c.clear();
        for (int i = 0; i < s.length(); i++)
        {
            
           


            if(c.size()==se.size()){
                if(c.count(s[i]-'a')>0  && l==c[s[i]-'a']){
                    l=i;
            }
            } 
            
            
        }
        for(auto aaa:c){
            l=min(l,aaa.second);
            h=max(h,aaa.second);
        }
        
        if(flag){
        for (int i = l; i <= h; i++)
        {
            cout<<(int)(s[i]-'a')+1;
            
        }
        cout<<endl;
        }
        
        c.clear();
        se.clear();
        

    }
    return 0;
}