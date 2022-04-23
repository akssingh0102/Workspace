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
    int y=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        
        int n;
        cin>>n;
        vector <int> a;
        for (int i = 0; i < n; i++)
        {
            iz(data)
            a.pb(data);
        }
        vector <int> b;
        int count=0,curr_count=0;
        for (int  i = 0; i < n-1; i++)
        {
            /* code */
            b.pb((a[i]-a[i+1]));
            

        }
        int data;
        for (int i = 0; i < b.size()-1; i++)
        {
            int j=i;
            while(j<n && b[i]==b[j]){

                curr_count++;
                j++;
            }
             count=max(count,curr_count);
            if(j==n) break;
            i=j;
            i--;
            curr_count=0;
        }
        
        cout<<"Case #"<<y+1<<": "<<count+1<<endl;
        a.clear();
        b.clear();
        y++;
    }
}