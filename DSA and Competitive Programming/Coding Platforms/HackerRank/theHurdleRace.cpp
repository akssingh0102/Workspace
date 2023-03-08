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
    iz(length)
    iz(jump_max)
    int dose=0;
    int max_hurdle=INT_MIN;
    forn(length){
        iz(hurdle)
        if(hurdle>jump_max && hurdle>max_hurdle){
            max_hurdle=hurdle;
            dose=max(dose,(hurdle-jump_max));
        }
    }
    cout<<dose;
}