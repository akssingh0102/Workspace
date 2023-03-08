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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        iz(n)
        vi a;
        forn(n){
            iz(data)
            a.pb(data);
        }
        int count=0;
        bool flag=false;
        vi even;
        vi odd;
        vi both;
        int even_max=INT_MIN,odd_max=INT_MIN,odd_max_count=INT_MIN;
        unordered_map <int,int> mp;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
            int j=i;
            while(a[j]==a[i] && j<n){
                count++;
                j++;
            }
            // if(count%2==1 && count>1){
            //     flag=true;
            //     break; 
            // }
            
            both.pb(count);
            if(count%2==0){
                even.pb(count);
                mp[count]++;
                even_max=max(count,even_max);
                
            }
            if(count%2==1){
                odd.pb(count);
                
                odd_max=max(odd_max,count);
                
            }
            
            if(j==n){
                
                break;
            }
            count=0;
            i=j-1;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;

        }
        else{
            if(both.size()==1 && odd.size()==1){
                cout<<"Yes"<<endl;

            }
            else if((odd_max>even_max) && (mp[odd_max]==1)){
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            
        }
    }   
    return 0;
}