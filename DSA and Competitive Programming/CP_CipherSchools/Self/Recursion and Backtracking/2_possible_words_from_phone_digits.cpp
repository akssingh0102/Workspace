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

const char hashTable[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 

void printRes(vector<string> &res){

    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    
}

void possWordsHelper(vector<int> &arr,int &n,vector<string> &res,string curr,int ind){
    if(curr.length() == n){
        res.push_back(curr);
        return;
    }

    for (int i = 0; i < strlen(hashTable[arr[ind]]); i++)
    {
        possWordsHelper(arr,n,res,curr+hashTable[arr[ind]][i],ind+1);
    }
    
}

void possWords(vector<int> &arr){
    int n = arr.size();
    vector<string> res;

    possWordsHelper(arr,n,res,"",0);

    printRes(res);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // cout<<"Hello"<<endl;
    vector<int> arr;
    int n;
    cin>>n;


    for (int i = 0; i < n; i++)
    {
        iz(data)
        arr.pb(data);
    }
    possWords(arr);

    
    
    return 0;
}