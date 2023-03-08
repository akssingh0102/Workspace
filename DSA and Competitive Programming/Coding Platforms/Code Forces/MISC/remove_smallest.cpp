#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[101]={};
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            a[data]=1;
        }
        int count=0;
        // if(a[1]==1 && a[2]!=1){
        //     count+=1;
        // }
        // if(a[50]==1 && a[49]!=1){
        //     count+=1;
        // }
        // for(int i=2;i<50;i++){
        //     if(a[i]==1 && (a[i-1]!=1 && a[i+1]!=1)){
        //         count++;
        //     }
        // }
        int l=1;
        int h=101;
        while(l<h){
            if(a[l]==1){
                count++;
                l++;
                while(a[l]!=0 && l<h){
                    l++;
                }
            }
            l++;
        }
        if(count>1){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }    
    return 0;
}