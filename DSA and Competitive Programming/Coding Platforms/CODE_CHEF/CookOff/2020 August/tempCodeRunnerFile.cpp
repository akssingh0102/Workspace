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

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        int n,k;
        cin>>n;
        cin>>k;
        vi a;
        int tot;
        for (int i = 0; i < n; i++)
        {
            iz(data)
            a.pb(data);
            tot+=a[i];

        }

        int weight=0,count=0;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            weight+=a[i];
            if(a[i]>k){
               flag=false;
               break;
            }
            if(weight>k){
                count++;
                
                weight=a[i];
            }
            
        }
        if(flag==false){
            cout<<-1<<endl;
        }
        else
        cout<<count+1<<endl;
        
        
    }
    return 0;
}