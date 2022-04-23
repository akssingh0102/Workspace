#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int weight;
    cin>>weight;
    if(weight==2){
        cout<<"NO";
    }
    else if(weight%2==0){
        cout<<"YES";
    }    
    else
    {
        cout<<"NO";
    }
    
    return 0;
}