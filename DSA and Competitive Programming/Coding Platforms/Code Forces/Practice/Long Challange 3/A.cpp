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
#define iz2(n,m)             int n,m; cin>>n>>m;
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
    int stu,subs;
    cin>>stu>>subs;
    char max_marks[subs];
    for (int i = 0; i < subs; i++)
    {
        max_marks[i]='0';
    }
    
    string marks[stu];
    for (int i = 0; i < stu; i++)
    {
        cin>>marks[i];
        for (int j = 0; j <subs;j++)
        {
            if(marks[i].at(j) > max_marks[j]){
                max_marks[j]=marks[i].at(j);
            }
        }
        
    }
    unordered_set <int> s;

    for (int i = 0; i < stu; i++)
    {
        for (int j = 0; j < subs; j++)
        {
            if(marks[i].at(j)==max_marks[j]){
                s.insert(i);
            }
        }
        
    }
    
    cout<<s.size()<<endl;
    return 0;
}