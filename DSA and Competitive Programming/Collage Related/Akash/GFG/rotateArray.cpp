#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}



    void rotateArr(int arr[], int d, int n)
    {
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
   
    
    }
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n;
        cin>>d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        rotateArr(a,d,n);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
        
    }
	return 0;
}