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

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <map>
using namespace std;

map <string, bool> mp;
bool check(int n, string pw[], string l, vector <string>& v)
{
    if(mp.find(l) != mp.end() && mp[l] == 0)return mp[l];
    if(l == "")return 1;
    for(int i = 0; i <n; i++)
    {
        int m = pw[i].size();
        if(pw[i] == l.substr(0, m))
        {
            bool b = check(n, pw, l.substr(m, l.size()-m), v);
            if(b == 1)
            {
                v.push_back(pw[i]);
                mp[l] = 1;
                return 1;
            }
        }
    }
    mp[l] = 0;
    return 0;
}

string passwordCracker(vector<string> passwords, string loginAttempt) {
vector <string> v;
        bool b = check(n, pw, login, v);
        if(!b)cout << "WRONG PASSWORD" << endl;
        else 
        {
            for(int i = v.size()-1; i >=0; i--)
                cout << v[i] << " ";
            cout << endl;
        } 
        mp.clear();
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        string pw[n];
        for(int i = 0; i <n; i++)
            cin >> pw[i];
        string login;
        cin >> login;
        vector <string> v;
        bool b = check(n, pw, login, v);
        if(!b)cout << "WRONG PASSWORD" << endl;
        else 
        {
            for(int i = v.size()-1; i >=0; i--)
                cout << v[i] << " ";
            cout << endl;
        } 
        mp.clear();
    }
    return 0;
}