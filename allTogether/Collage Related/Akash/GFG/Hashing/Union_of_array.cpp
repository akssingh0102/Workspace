#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int unionn(int a[],int b[],int m,int n){
    unordered_set <int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        s.insert(b[i]);
    }

    return s.size();
    
    
}
int main(){
    int a[7]={10,15,20,15,30,30,5};
    int b[4]={30,5,30,80};
    cout<<unionn(a,b,7,4)<<endl;    
    return 0;
}