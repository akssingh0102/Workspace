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

class Solution
{
    public:
    void printWordsUtil(int number[],int curr_digit,string output,int n,vector <string> &res) 
    {
        int i; 
        if (curr_digit == n) 
        { 
            res.push_back(output);
            return ; 
        } 
      
        for (i=0; i<strlen(hashTable[number[curr_digit]]); i++) 
        { 
            output.push_back(hashTable[number[curr_digit]][i]); 
            printWordsUtil(number, curr_digit+1, output, n, res); 
            if (number[curr_digit] == 0 || number[curr_digit] == 1) 
                return; 
            output.pop_back();
        } 
    } 
    
    vector<string> possibleWords(int *a, int &N)
    {
        vector <string> res;
        string result;
        printWordsUtil(a, 0, result, N, res);
        
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
    Solution ob;
    int N=3;
    int arr[] = {3,4,5};
    vector<string> res = ob.possibleWords(arr,N);

    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    
    
    return 0;
}