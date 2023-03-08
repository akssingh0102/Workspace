// For only lower case alphapet , for all charater can also be done using unordered_set in place of array

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

int lengthOfLongestString(string s){
    vector<bool> visited(26,false);
    int res = 1;

    if(s.length() <= 1){
        return s.length();
    }
    else{
        // visited[s[0]-'a'] = true;
        int n = s.length();
         int currRes = 1;
        int l=0,r=0;
        while(r<n){
            while(r<n && visited[s[r]-'a']==false){
                visited[s[r]-'a'] = true;
                r++;
            }

            
            res = max(res,(r-l));             // updating res
            if(r == n) break;                   // checking if end of string

            while(s[l] != s[r] ){
                visited[s[l]-'a'] = false;
                l++;
            }
            l++;
            visited[s[r]-'a']=false;
        }        
    }
    return res;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    cout<<lengthOfLongestString(s);
    return 0;
}