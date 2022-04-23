#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
void primeSieve(int *p){
    //markes all odd int as potential prime's
    for (int i = 3; i < 1000000; i+=2)
    {
        p[i]=1;
    }

    //Sieve
    for (ll i = 3; i < 1000000; i+=2)
    {
        //if current no. is not marked it's Prime
        if(p[i]==1){
            for (ll j=i*i; j < 1000000; j+=i)
            {
                p[j]=0;
            }
            
        }
    }
    //special case
    p[2]=1;
    p[0]=p[1]=0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int prime[1000000]={};
    primeSieve(prime);
    com{
        iz(n)
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            if(prime[i]==1 && prime[n-i]==1)
            {
                flag=true;
            }
        }
    if(flag){
        cout<<"Yes"<<endl;
    }    
    else cout<<"No"<<endl;
    }
    return 0;
}