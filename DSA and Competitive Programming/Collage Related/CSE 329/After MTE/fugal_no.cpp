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

int factor(int n){
    int curr_count=0;
    bool flag=false;
    unordered_set <int> count;
    for(int i=2;i*1<=n;i++){
        while(n%i==0 ){
            curr_count++;
            n/=i;
            flag=true;
        }
        if(curr_count>1 && flag){
            count.insert(i);
            count.insert(curr_count);
        }
        else if(flag){
            count.insert(i);
        }
        curr_count=0;
        flag=false;
        if(n==1){
            break;
        }
    }

    if(n>2){
        count.insert(n);
    }
    return (int)count.size();
}
bool isFugal(int n){
    int num=n;
    int len=0;
    while(n){
        len++;
        n/=10;
    }
    cout<<"Len="<<len<<" FActor"<<factor(num)<<endl;
    if(len>factor(num)){
        return true;
    }
    else return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // for(int i=0;i<500;i++){

    
    int n;
    cin>>n;
    // n=i;
    // cout<<i<<"-";
    if(isFugal(n)){
        cout<<"YES";
    }
    else cout<<"NO";
    cout<<" ";

    // }

    return 0;
}