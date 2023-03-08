#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<int>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
int charToInt(char c){
    return (int)(c-'0');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        iz(n);
        string s;
        cin>>s;
        vi a;
        for (int i = 0; i < n; i++)
        {
            int data;
            data=charToInt(s[i]);
            a.pb(data-1);
        }
        unordered_map <int,int> mp;
        int sub_arr=0;
        for (int i = 0; i < n; i++)
        {
            sub_arr+=a[i];
            if(sub_arr==0 || mp.find(sub_arr)!=mp.end()){
                mp[sub_arr]++;
            }
        }
        
         

        
    }
    return 0;
}