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
    iz(n)
    vector <float> a;
    int p_count=0,n_count=0,z_count=0;
    unordered_map <float,float> mp;
    forn(n){
        float data;
        cin>>data;
        a.pb(data);
        mp[data]++;
        if(data>0){
            p_count++;
        }
        else if(data<0){
            n_count++;
        }
        else{
            z_count++;
        }
    }
    // cout<<"positive count :"<<p_count<<endl<<"Negative count :"<<n_count<<endl<<"Zero count : "<<z_count<<endl;
    int half_arr=(ceil(n/2.0)),pos_count=0;
    // cout<<"Half of arr :"<<half_arr<<endl;
    int flag;
    if(p_count>=half_arr){
        flag=1;
    }
    else if(n_count>=half_arr){
        flag=-1;
    }
    else{
        flag=0;
    }

    if(flag==0){      //zeroes more
        cout<<0;
        return 0;
    }
    if(flag==1){
    for (int i = 1; i < 1001; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((a[j]/i)>0){
                pos_count++;
            }
        }
        if(pos_count>=half_arr){
            cout<<i;
            return 0;
        }
        pos_count=0;
        
    }
    }
    else {
        for (int i = -1000; i < 0; i++)
        {
            for (int j = 0; j < n; j++)
            {
               if((a[j]/i)>0){
                pos_count++;
                }
            }
            if(pos_count>=half_arr){
            cout<<i;
            return 0;
        }
        pos_count=0;
        }
        
        
    }
    
}