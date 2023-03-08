#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l*2<=r){
            cout<<l<<" "<<2*l<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}