#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int a[n];
         for (int i = 0; i < n; i++)
         {
             int data;
             cin>>data;
             a[data-1]=i+1;

         }
         for (int i = 0; i < n; i++)
         {
             cout<<a[i]<<" ";

         }
         cout<<endl;
         
         
     }

	//code
	return 0;
}