#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        vector <int> a;
        for (int i = 0; i < y; i++)
        {
            a.push_back(1);
        }
        a[0]=0;
        a[1]=0;

       for (int i = 0; i < sqrt(y); i++)
        {
            if(a[i]==1){

            
            for (int j = 2; i*j < y; j++)
            {
                a[j]=0;
            }
            }
            
            
        }
        
        
    }
    
return 0;

}