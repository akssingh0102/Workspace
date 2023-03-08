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

bool palan(string s){

    int l,r;
    l=0;
    r=s.length()-1;

    while (l<r)     
    {
        if(s[l]==s[r]) return false;
        l++;
        r--;
    }
    return true;

    
}

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
        int n=s.length();
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='a') count++;
        }
        
        bool isPal=palan(s);
        if(isPal && count==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int l=0;
            int r=n-1;
            bool flag=true;
            while (l<=r)
            {
                if((s[r]!='a' && flag)){
                    cout<<"a"<<s[l];
                    flag=false;
                }
                else if((s[l]!=s[r]) && flag){
                    cout<<s[l]<<"a";
                    flag=false;
                }
                // else if(s[l]==s[r] && s[l]!='a' && flag){
                //     cout<<"a"<<s[l];
                //     flag=false;
                // }
                else{
                    cout<<s[l];
                }
                l++;
                r--;
            }
            for (int i = ceil((n*1.0)/2); i < n; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
            
            
        }
    }
    return 0;
}