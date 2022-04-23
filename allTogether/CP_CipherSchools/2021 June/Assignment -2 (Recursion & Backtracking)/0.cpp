// Generate parentheses

//https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1

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
#define mod                 1000000007

class Solution
{
    public:
    void AllParenthesisHelper(int open,int close,string curr,vector<string> &res){
    if (open < 0 || close < 0) {
        return;
    }

    if (open > close) {
        return;
    } 
    else {
        // open <= close
         if (open == 0 && close == 0) {
            res.push_back(curr);
            return;
        }
    }

        curr.push_back('(');
        AllParenthesisHelper(open - 1, close, curr, res);
        curr.pop_back();

        curr.push_back(')');
        AllParenthesisHelper(open, close - 1, curr, res);
        curr.pop_back();
    }


    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        int open,close;
        open =n;
        close=n;
        vector<string> res;
        AllParenthesisHelper(open,close,"",res);
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n=3;

    Solution ob;
    vector<string> res=ob.AllParenthesis(n);

    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    

    
    return 0;
}