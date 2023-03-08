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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;    ///string
        unordered_map <char,int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='L'){
                mp['L']++;
            }
            else if(s[i]=='R'){
                mp['R']++;
            }
            else if(s[i]=='U'){
                mp['U']++;
            }
            else if(s[i]=='D'){
                mp['D']++;
            }
        }
        
        std::pair <int,int> p;  //pairs
        cin>>p.ff;
        cin>>p.ss;

        int q;
        cin>>q;
        vector < pair<int,int> > v;
        for (int i = 0; i < q; i++)
        {
            int aa,bb;
            cin>>aa;
            cin>>bb;
            v.push_back(make_pair(aa,bb));
        }
        int res=0;
        for (int i = 0; i < q; i++)
        {
            if(v[i].ff==p.ff && v[i].ss==p.ss){
                cout<<"YES"<<" "<<0<<endl;
                continue;
            }
            else{
                // int x=v[i].ff-p.ff;
                // int y=v[i].ss-p.ss;
                // cout<<"x ="<<x<<endl;
                // cout<<"y ="<<y<<endl;
                if(v[i].ff<=p.ff){
                    if(abs(v[i].ff-p.ff)<=mp['R']){
                        res+=abs(v[i].ff-p.ff);
                    }
                    else{
                        cout<<"NO"<<endl;
                        continue;
                    }
                }
                else if(v[i].ff>p.ff){
                    if(abs(v[i].ff-p.ff)<=mp['L']){
                        res+=abs(v[i].ff-p.ff);
                    }
                    else{
                        cout<<"NO"<<endl;
                        continue;
                    }
                }
                if(v[i].ss<=p.ss){
                    if(abs(v[i].ss-p.ss)<=mp['U']){
                        res+=abs(v[i].ss-p.ss);
                    }
                    else{
                        cout<<"NO"<<endl;
                        continue;
                    }
                }
                else if(v[i].ss>p.ss){
                    if(abs(v[i].ss-p.ss)<=mp['D']){
                        res+=abs(v[i].ss-p.ss);
                    }
                    else{
                        cout<<"NO"<<endl;
                        continue;
                    }
                }
                cout<<"YES"<<" "<<res<<endl;
                res=0;
            }
        }
        
    }
}