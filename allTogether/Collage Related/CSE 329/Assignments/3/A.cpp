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
bool cp(pair<int,int> p1,pair<int,int> p2){
    return p1.second < p2.second;
}

int activitySelection(int start[], int end[], int n){
    // Your code here
    vector < pair<int,int> > p;
    for(int i=0;i<n;i++){
        p.push_back(make_pair(start[i],end[i]));
    }
    sort(p.begin(),p.end(),cp);
    int count=0;
    int last;
    for(int i=0;i<n;i++){
        if(i==0){
            last=p[i].second;
            count++;
        }
        else{
            if(p[i].first >= last){
                count++;
                last=p[i].second;
            }
        }
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    iz(n)
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    cout<<activitySelection(a,b,n);
    
    return 0;
}