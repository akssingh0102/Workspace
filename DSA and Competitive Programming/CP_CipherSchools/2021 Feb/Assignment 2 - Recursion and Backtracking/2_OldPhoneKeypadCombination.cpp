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
vector <string> keyPad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void phonePadHelper(vector<int> &number,vector<string> &res,int size,int curr_size,string curr){
    if(curr_size==size){
        res.push_back(curr);
        return;
    }

    string possibleNum = keyPad[number[curr_size]];
    for (int i = 0; i < possibleNum.length(); i++)
    {
        phonePadHelper(number,res,size,curr_size+1,curr+possibleNum[i]);
    }
    
}   

vector <string> phonePad(vector <int> &number,vector<string> &res){
    int size=number.size();
    phonePadHelper(number,res,size,0,"");
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> number={2,3,4};
    vector <string> res;
    phonePad(number,res);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    for(string xx:res){
        cout<<xx<<" ";
    }
    
    return 0;
}