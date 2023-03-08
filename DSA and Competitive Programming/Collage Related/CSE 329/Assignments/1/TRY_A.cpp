#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
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

using namespace std;
void rotate_left(int a[],int d,int n){
    reverse(a,a+d);
    reverse(a+(d+1),a+n);
    reverse(a,a+n);

}
void rotate_right(int a[],int d,int n){
    reverse(a,a+n);
    reverse(a,a+d);
    reverse((a+d+1),a+n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    iz(n)
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    pair<int,int> high;
    pair<int,int> low;
    high.ff=INT_MIN;
    low.ff=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>high.ff){
            high.ff=a[i];
            high.ss=i;
        }
        if(a[i]<low.ff){
            low.ff=a[i];
            low.ss=i;
        }
    }
    int d=(abs(high.ff-low.ff)%n);
    if(high.ss<low.ss && d>0){
        rotate_left(a,d,n);
    }
    else if(d>0){
        rotate_right(a,d,n);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}