                                    //Derectory Structure  (/User/Documents)
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
class Deque{
    deque <string> dq;
    public:
    // void forMultipleSlash(string s){
    //     string 
    //     while (token != NULL) 
    // { 
    //     printf("%s\n", token); 
    //     token = strtok(NULL, "-"); 
    // } 
    // }
    void addAddress(){                 //Can only add one path at a time eg.(/User)
        string s;                      //Can't aad multiple path at once eg.(/User/Documents)
        cin>>s;
        s=s.substr(1,s.length());
        dq.push_back(s);
    }
    void dotpath(){
        string s;
        cin>>s;
        int dot_size=s.length()-1;
        int minus=dq.size();
        minus-=dot_size;
        minus=max(0,minus-1);

        int minn=max(0,minus);
        cout<<"/"<<dq[minn]<<endl;
        dq.pop_back();

    }
    void printPath(){
        for (int i = 0; i < dq.size(); i++)
        {
            cout<<"/"<<dq[i];
        }
        
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Deque dq;
    while (1)
    {
        cout<<endl<<"Press 1 to add path"<<endl<<"Press 2 for dot operation";
        cout<<endl<<"press 3 to print the path"<<endl<<"Press 4 to exit"<<endl;

        int a;
        cin>>a;
        switch (a)
        {
        case 1:
            dq.addAddress();
            break;
        case 2:
            dq.dotpath();
            break;
        case 3:
            dq.printPath();
            break;
        
        default:
            return 0;
            break;
        }
    }
    
    


}