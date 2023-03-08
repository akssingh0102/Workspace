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
    int count=0;
    vector <int> a;
    bool left_pass=false;
    string  data="A";
    ll left,right;
    left=right=0;
    string str;
    do {
    getline(cin,data);
    str += data + '\n';
  } while (!data.empty());
    ll mid;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='^'){
            mid=i;
        }
    }
    count=mid;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='0' && str[i]<='9' && i<mid){
            left+=(ll)(count*(str[i]-'0'));
            count--;
        }
        if(str[i]>='0' && str[i]<='9' && i>mid){
            ++count;
            right+=(ll)(count*(str[i]-'0'));
            
        }
        if(i==mid) count=0;
    }
    cout<<"Left :"<<left<<"  Right :"<<right<<endl;
    if(left>right) cout<<"left";
    else if(left<right) cout<<"right";
    else cout<<"balance";
    

    
    return 0;
}