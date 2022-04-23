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
bool palandrome(string s){

    bool flag=true;
    int l=0;
    int r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]){
            flag=false;
            break;
        }
        l++;
        r--;
    }
    return flag;
}

bool valid(string s){

    bool flag=true;
    unordered_set<char> ss;
    ss.insert('A');
    ss.insert('H');
    ss.insert('I');
    ss.insert('M');
    ss.insert('O');
    ss.insert('T');
    ss.insert('U');
    ss.insert('V');
    ss.insert('W');
    ss.insert('X');
    ss.insert('Y');

    for (int i = 0; i < s.length(); i++)
    {
        if(ss.count(s[i])==0){
            return false;
        }
    }
    return true;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // com{
        string s;
        cin>>s;
        bool isPalandrome=palandrome(s);
        bool containvalid=valid(s);

        if(isPalandrome && containvalid){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    // }
    return 0;
}