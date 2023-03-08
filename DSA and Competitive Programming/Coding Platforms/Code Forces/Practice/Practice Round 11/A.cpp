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
        ll n;
        cin>>n;
        ll fake=n;
        int len=0;
        vll a;
        
        int num;
        while(fake){
            len++;
            if(fake<10){
                num=fake;
            }
            fake/=10;
            
        }
        fake=n;
        
        
        ll res=(9*(len-1));
        // cout<<"len="<<len<<endl;
        while (fake)
        {
            if((fake%10)<num){
                break;
            }
            fake/=10;

        }
        // cout<<"Fake = "<<num<<" "<<fake<<endl;
        if (fake==0)
        {
            res+=num;
        }
        else
        res+=(num-1);

        if(n<10){
            res=n;
        }
        
        cout<<res<<endl;

    }
    return 0;
}