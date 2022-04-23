#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while (t--)
     {
         
         int n;
         cin>>n;
         int a[n],max_length=0,count=0;
         
         for (int  i = 0; i < n; i++)
         {
             cin>>a[i];
             if(a[i]>=0){
                 count++;
             }
             else
             {
                 count=0;
             }
             max_length=max(max_length,count);

             

         }
         cout<<max_length<<endl;
         
         

     }
     
	//code
	return 0;
}