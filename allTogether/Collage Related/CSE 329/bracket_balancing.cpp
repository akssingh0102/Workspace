#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    // if(s[0]=='}'){
    //     cout<<"False";
    //     return 0;
    // }
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(count==-1){
            cout<<"False";
            return 0;
        }
        if(s[i]=='{'){
            count++;
        }
        else{
            count--;
        }
    }
    if(count==0){
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    
    
    return 0;
}