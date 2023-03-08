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

void allCombinationHelper(vector<int> number,vector<string> &res,int index,string curr){

    if(index>=number.size()){
        res.pb(curr);
        return;
    }

    for(int i=index;i<number.size();i++){
        swap(number[i],number[index]);
        allCombinationHelper(number,res,index+1,curr+to_string(number[index]));
        //Backtracking
        swap(number[i],number[index]);
    }
}

vector <string> allCombination(vector<int> &number){
    vector<string> res;
    allCombinationHelper(number,res,0,"");
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    vector <int> number = {1,2,3,4};
    vector <string> res=allCombination(number);
    int i=0;
    for(string x:res){
        cout<<(++i)<<":"<<x<<endl;
    }

    
    
    return 0;
}