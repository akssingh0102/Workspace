#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6}; 
    int pos,element;
    cin>>pos;
    cin>>element;
    for (int i = pos; i < a.size()-1; i++)
    {
        a[pos+1]=a[pos];
    }
    a[pos]=element;
       
    return 0;
}