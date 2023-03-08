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
#define pq                  priority_queue <int, vector<int>, greater<int> >


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{
        iz(n)
        iz(num)
        take(a,n)
        for(int i=0;i<n;i++){
            if((a[i]%10) == num){
                cout<<"YES"<<endl;
                continue;
            }
            if(a[i]<=9){
                if(a[i]==num){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                // int leftMost_digit=a[i];
                // while(leftMost_digit>9){
                //     leftMost_digit/=10;
                // }
                int ni=((a[i]/10)*10)+num;
                if(ni< a[i]){
                    if((a[i]-ni) == num){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
                else{
                    int nn=a[i],sec;
                    nn/=10;
                    // nn*=10;
                    sec=nn%10;
                    nn=a[i];
                    nn/=10;
                    nn/=10;
                    nn+=(((sec-1)*10)+(num));
                    if(a[i]-nn == num){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }

                }


            }
        }
    }
    return 0;
}