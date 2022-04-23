#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        iz(n)
        // string a[n];
        int a[26]={};
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            for (int i = 0; i < s.length(); i++)
            {
                a[s[i]-'a']++;
            }
        }
        bool flag=true;
        for (int i = 0; i < 26; i++)
        {
            if(a[i]%n!=0){
                flag=false;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    return 0;
}