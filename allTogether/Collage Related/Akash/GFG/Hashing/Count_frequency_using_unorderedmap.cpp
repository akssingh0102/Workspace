#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
void countFrequency(int arr[],int size){
    unordered_map <int,int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    

}
int main(){
    
    int arr[5]={3,3,5,2,1};
    countFrequency(arr,5);
    
}