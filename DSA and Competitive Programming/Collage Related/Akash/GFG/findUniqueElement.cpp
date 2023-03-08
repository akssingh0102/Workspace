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
         int k;
         cin>>n;
         cin>>k;
         int a[n];
         for (int i = 0; i < n; i++)
         {
             cin>>a[i];
         }
         int ans=0;
        for (int i = 0; i < n; i++)
        {
            int flag=0;
            for (int j = i+1; j < n; j++)
            {
                if (a[i]==a[j])     
                {
                    flag=1;
                    break;

                }

                
                
            }
            if(flag==0){
                ans=a[i];
                break;
            }
            
        }
        cout<<ans<<endl;
        
         
     }
     
	//code
	return 0;
}