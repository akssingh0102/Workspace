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
        int a[n],b[n];
        int a_min=INT_MAX;
        int b_min=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            a_min=min(a_min,a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            b_min=min(b_min,b[i]);
        }
        int z_max=max(a_min,b_min);
        long long  count=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>z_max && b[i]>z_max){

            
            count+=abs(a[i]-b[i]);
            if(a[i]>b[i]){
                a[i]-=abs(a[i]-b[i]);
            }
            else if(b[i]>a[i])
            {
                 b[i]-=abs(a[i]-b[i]);
            }
            if(a[i]>z_max && b[i]>z_max){
                count+=abs(a[i]-z_max);
                a[i]-=abs(a[i]-z_max);
                b[i]-=abs(a[i]-z_max);
            }
            if(a_min!=z_max){
                count+=abs(a_min-a[i]);
            }
            else if(b_min!=z_max)
            {
                count+=abs(b_min-b[i]);
            }   
            }
            else 
            {
                count+=abs(a[i]-a_min);
                count+=abs(b[i]-b_min);
            }
            
            
                
            }
            
            cout<<count<<endl;
        }
        
        
        return 0;
}    
    