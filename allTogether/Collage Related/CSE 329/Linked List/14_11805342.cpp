                                                // Remove pair if equal 
#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vll                 vector<ll> 
#define full(a)             (a.begin(),a.end())
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)            int n,m; cin>>n>>m;
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
    string s;
    cin>>s;
    stack <char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(st.size()==0){
            st.push(s[i]);
        }
        else if(s[i]==st.top()){
            st.pop();
        }
        else 
        st.push(s[i]);
    }
    vc arr;
    while((int)st.size()>=1)
    {
        arr.pb(st.top());
        st.pop();
    }

    reverse full(arr);
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    
    return 0;
}