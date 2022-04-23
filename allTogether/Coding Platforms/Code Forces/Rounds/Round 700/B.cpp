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
        int hero_attack,hero_defence;
        cin>>hero_attack;
        cin>>hero_defence;
        int n;
        // ll min_poss[1000000001]={0};
        unordered_map <ll,ll> min_poss;
        cin>>n;
        take(monster_attack,n)
        take(moster_defence,n)
        int defete_count=0;
        for (int i = 0; i < n; i++)
        {
            int turn=((moster_defence[i]/hero_attack));
            if(moster_defence[i]%hero_attack != 0){
                turn++;
            }
            // if((turn*monster_attack[i]) > hero_defence){
            //     break;
            // }
            // else{
            //     hero_defence-=(turn*monster_attack[i]);
            //     defete_count++;
            // }
            // if(hero_defence == 0){
            //     break;
            // }
            min_poss[turn]+=(turn*monster_attack[i]);   
        }
        for(ll i=0;i< 1000000001 ;i++){
            hero_defence-=min_poss[i];
            if(hero_defence>=0){
                defete_count++;
            }
        }
        if(defete_count == n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}