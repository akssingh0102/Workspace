#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

void printLeaders(int arr[], int size) 
{ 
    int max_from_right =  arr[size-1]; 
  
    
    cout << max_from_right << " "; 
      
    for (int i = size-2; i >= 0; i--) 
    { 
        if (max_from_right <= arr[i])  
        {            
            max_from_right = arr[i]; 
            cout << max_from_right << " "; 
        } 
    }     
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        unordered_map
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];            
        }
        printLeaders(a,n);
        cout<<endl;
    } 
    return 0;
}