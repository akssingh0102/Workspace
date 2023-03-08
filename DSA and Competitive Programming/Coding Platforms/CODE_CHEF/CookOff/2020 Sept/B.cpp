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
        int k,n;
        cin>>k>>n;
        string s;
        cin>>s;
        vi a;
        for (int i = 0; i < s.length(); i++)
        {
            a.pb((int)(s[i]));
        }

        vi diff;
        int pre=-1;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]==1 && pre!=-1){
                int d=(i-pre);
                d--;
                diff.pb(d);
                pre=i;
            }
            else if(a[i]==1){
                pre=i;
            }
        }
        int far;
        bool flag=true;
        for (int i = 0; i < diff.size(); i++)
        {
            if(diff[i]>n){
                far=i+1;
                flag=false;
            }
        }
        if(flag){
            cout<<0<<endl;
            continue;
        }
        else{
            int first,last;
            int count=0;
            for (int i = 0; i < n; i++)
            {
                if(a[i]==1){
                    count++;
                }
                if(count==far){
                    first=i;
                    break;
                }
            }
            for (int i = a.size()-1; i <= 0; i++)
            {
                if(a[i]==1){
                    last=i;
                    break;
                }
            }
            int difference=abs(last-first);
            int cc=0,dd=0;
            cc=difference/n;
            dd=difference%n;
            if(dd>0){
                cc++;
            }
            
            
        }
        
        
        

    }
    return 0;
}