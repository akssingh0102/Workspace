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
#define mod                 1000000007


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    com{
        int people,seats,q;
        cin>>people>>seats>>q;
        unordered_set<int> s;
        bool flag = true;
        for (int i = 0; i < q; i++)
        {
            char curr;
            cin>>curr;
            int person_number;
            cin>>person_number;
            if(curr == '-'){
                // int person_number = curr[1] - '0';
                if(s.count(person_number) != 1){
                    // cout<<"-";
                    flag = false;
                    // break;
                }
                s.erase(person_number);
            }
            else{
                // int person_number = curr[1] - '0';
                
                if(s.size() == seats){
                    // cout<<person_number<<curr;
                    // cout<<"+";
                    flag = false;
                    // break;
                }
                s.insert(person_number);
            }

        }
        s.clear();
        if(flag){
            cout<<"Consistent"<<endl;
        }
        else{
            cout<<"Inconsistent"<<endl;
        }
        
    }
    return 0;
}