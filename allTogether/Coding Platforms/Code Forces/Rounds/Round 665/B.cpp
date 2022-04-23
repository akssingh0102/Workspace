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
        int a_0,a_1,a_2,b_0,b_1,b_2;
        cin>>a_0>>a_1>>a_2;
        cin>>b_0>>b_1>>b_2;
        vi a1;
        vi b1;
        for (int i = 0; i < a_2; i++)
        {
            a1.pb(2);
            /* code */
        }
        for (int i = 0; i < a_0; i++)
        {
            a1.pb(0);
            /* code */
        }
        for (int i = 0; i < a_1; i++)
        {
            a1.pb(1);
            /* code */
        }


        for (int i = 0; i < b_1 && i<a_2; i++)
        {
            b1.pb(1);
            /* code */
        }
         for (int i = 0; i < b_2; i++)
        {
            b1.pb(2);
            /* code */
        }
        for (int i = 0; i < b_0; i++)
        {
            b1.pb(0);
            /* code */
        }
        ll res;
        for (int i = 0; i < (a_0+a_1+a_2); i++)
        {
            if(a1[i]>b1[i]){
                res+=(a1[i]*b1[i]);
            }
            else if(a1[i]==b1[i]){
                res+=0;
            }
            else{
                res-=(a1[i]*b1[i]);
            }
        }
        
    cout<<res<<endl;

              
    }
}