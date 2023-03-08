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
#define iz2(n,type)             int n,type; cin>>n>>type;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)
#define pq                  priority_queue <int, vector<int>, greater<int> >
#define mod                 1000000007


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    stack<long int> s;
    long int n,x;
    int type;
    cin>>n;
    while(n--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>x;
            if(s.empty())
            s.push(x);
            else
            {
                if(x>s.top())
                    s.push(x);
                else
                    s.push(s.top());
            }    
                
        }
        if(type==2)
        {
            if(!s.empty())
                s.pop();
        }
        if(type==3)
        {
            cout<<s.top()<<endl;
        }      
        
    }
    return 0;
}