#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum;
        cin>>n;
        cin>>sum;
        vector <int> a;
        for(int i=0;i<n;i++){
            int data;

            cin>>data;
            a.push_back(data);
        }
        
        
        int curr_sum=a[0];
        int start=0,end=0;
        while (curr_sum<sum && start < end-1 )
        {
           if(curr_sum==sum){
               break;
           }
        }
        
    }
    
    return 0;
}