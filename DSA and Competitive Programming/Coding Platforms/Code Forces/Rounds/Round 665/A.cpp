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
    com{
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a<b){
            cout<<(b-a)<<endl;
        }
        else
        {
            if(a==1 && b==0){
                cout<<1<<endl;
            }
            else{
                if(((a%2==1) && (b%2!=1)) || ((a%2==0) && (b%2!=0)) ){
                    cout<<1<<endl;
                }
                else{
                    
                    cout<<0<<endl;
                }
            }
        }
        
    }
}