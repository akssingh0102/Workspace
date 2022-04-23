#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool pairwithsum(int arr[],int n,int sum){
    unordered_set <int> s;
    for (int i = 0; i < n; i++)
    {
        if(s.find(sum-arr[i])!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[]={10,30,40,50,4,6,8,34};
    int sum=10;
    if(pairwithsum(arr,8,10)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present";
    }
        
    return 0;
}