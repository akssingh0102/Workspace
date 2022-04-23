#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int data=a[i];
        while (data)
        {
            if(data & 1){
                count++;

            }
            data=data>>1;
        }
        b[i]=count;
        count=0;
        
    }
    int max=0;
    for (int i = 0; i <=n-k; i++)
    {
        max=b[i];
        for (int j = i; j < (k+i); j++)
        {
            if(b[i]>=max){
                max=b[i];
            }
        }
        cout<<max<<" ";
        max=0;
        
    }
    
    
    return 0;
}