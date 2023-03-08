#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<int>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)
bool divCheck(ll n,ll p,ll y){
    for (int i = 2; i*i <=y && i<=p; i++){
        
		if(n%i==0) 
        return false;


	}


	return true;
}

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p,y;
    cin>>p>>y;
    for (int i = y; i > p; i--) {
		if(divCheck(i,p,y)) 
        {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;

    
}