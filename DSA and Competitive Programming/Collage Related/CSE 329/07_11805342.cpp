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
   int n;
   cin>>n;
   long long int a[n];
   long long int sum=0;

   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   for (int i = 0; i < n; i++)
   {
       cout<<sum-a[i]<<" ";
   }
   cout<<endl;

    } 
    return 0;
}