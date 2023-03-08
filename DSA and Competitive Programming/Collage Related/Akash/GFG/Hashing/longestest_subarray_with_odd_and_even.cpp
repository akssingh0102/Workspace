// { Driver Code Starts
//Initial Template for C++


#include<iostream> 
using namespace std; 


 // } Driver Code Ends





//User function Template for C++

//Complete this function
int maxEvenOdd(int a[], int n) 
{ 
   //Your code here
   int curr_count=1,res=0,max_count=1;
   for (int i = 1; i < n; i++)
   {
       if(((a[i]%2==1) && (a[i-1]%2==0)) || ((a[i]%2==0) && (a[i-1]%2==1)) )
       {
           curr_count++;
           max_count=max(curr_count,max_count);
       }
       else
       {
           
           curr_count=1;
           
       }
       
   }
   return max_count;
   
} 


// { Driver Code Starts.



/* Driver program to test maxSubArraySum */
int main() 
{ 
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cout  << maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends