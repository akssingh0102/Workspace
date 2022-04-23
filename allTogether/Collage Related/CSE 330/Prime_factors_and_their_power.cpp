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
void primeFactors(int n,int *factor)  
{  
    for (int i = 0; i <= n; i++)
        {
            factor[i]=0;
        }
   
    while (n % 2 == 0)  
    {  
        factor[2]++;
        n = n/2;  
    }  
  
    
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
          
        while (n % i == 0)  
        {  
            factor[i]++;
            n = n/i;  
        }  
    }  
 
    if (n > 2)  
        factor[n]++;
}  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    com{
        int n;
        cin>>n;
        int factor[n+1];
        
        
        primeFactors(n,factor);
        for (int i = 0; i <= n; i++)
        {
            if(factor[i]!=0){
                cout<<i<<" "<<factor[i]<<" ";
            }
        }
        cout<<endl;

    }
    
}