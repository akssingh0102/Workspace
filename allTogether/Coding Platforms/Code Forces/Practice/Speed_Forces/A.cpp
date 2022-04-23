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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
       vector <string> aa;
    //    C, C#, D, D#, E, F, F#, G, G#, A, B, H.
       aa.pb("C");
       aa.pb("C#");
       aa.pb("D");
       aa.pb("D#");
       aa.pb("E");
       aa.pb("F");
       aa.pb("F#");
       aa.pb("G");
       aa.pb("G#");
       aa.pb("A");
       aa.pb("B");
       aa.pb("H");
       vector <string> b;
       for (int i = 0; i < 3; i++)
       {
           string data;
           cin>>data;
           b.pb(data);
       }
       int a_b,b_c;
       int count=0;
       for (int i = 0; i < 12; i++)
       {
           if(aa[i]==b[i]){
               i++;
               count++;
               if(i==12){
                   i=0;
               }
               for (int j = i; j < 12; j++,count++)
               {
                   if(j==12){
                       j=0;
                   }
                   if(aa[j]==b[j]){
                       a_b=count;
                       count=1;
                       j++;
                       if(j==12){
                           j=0;
                       }
                       for (int k = j; k < 12; k++,count++)
                       {
                           if(aa[k]==b[k]){
                               b_c=count;
                               break;
                           }
                       }
                       break;
                   }
               }
               break;
           }
       }
       if(a_b==4 && b_c==3){
           cout<<"major";
       }
       else if(a_b==3 && b_c==4){
           cout<<"minor";
       }
       else{
           cout<<"strange";
       }
       
    
    return 0;
}