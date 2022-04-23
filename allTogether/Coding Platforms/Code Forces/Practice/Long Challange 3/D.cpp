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
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"NO"<<endl;
        // cout<<"00000";
        return 0;
    }
    else{
        int count=0;
        // pair <char,char> d1;
        // pair <char,char> d2;
        vector <char> d1;
        vector <char> d2;
        // unordered_set <char> d;
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i]!=s2[i]) {
                
                if(count==1){
                    d1.pb(s1[i]);
                    d2.pb(s2[i]);
                }
                d1.pb(s1[i]);
                d2.pb(s2[i]);
                count++;
            }
        }

        if(count!=2) {
            cout<<"NO";
            // cout<<"++++";
            return 0;
        }
        // cout<<d1[0]<<s1[1]<<endl;
        // cout<<"D2"<<d2[0]<<d2[1]<<endl;
        // sort(d1,d1+1);
        // sort(d2,d2+1);
        
        if(d1[0]==d2[1] && d1[1]==d2[0]){
            cout<<"YES";
            return 0;
        }
        
        else{
            cout<<"NO";
            // cout<<"----";
            return 0;
        }


        
    }
    return 0;
}