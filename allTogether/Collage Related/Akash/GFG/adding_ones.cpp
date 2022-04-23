#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while (t--)
     {
         int n,k;
         cin>>n;
         cin>>k;
         int a[n]={0};
         int b[k];
         for (int i = 0; i < k; i++)
         {
             
             cin>>b[i];
             
             
         }
         for (int i = 0; i < n ; i++)
         {
            for (int j = b[i]-1; j < n; j++)
            {
                a[j]++;
            }
            
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