// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





// a: input aay
// num: length of aay
// This function returns true or false
void rotate(int a[],int n ,int l,int r){
    
    while (l<r) 
    {
        swap(a[l],a[r]);
        l++;
        r--;
    }

    

}

bool checkRotatedAndSorted(int a[], int num){
    
    // Your code here
    int minn=a[0],low=0;
    for (int i = 1; i < num; i++)
    {
       if(a[i]<minn){
           minn=a[i];
           low=i;
       }
    }
    rotate(a,num,low,num-1);
    rotate(a,num,0,low-1);
    rotate(a,num,0,num-1);
    if(a[0]<a[num-1]){
        
        for (int i = 0; i < num-1; i++)
        {
            if(a[i]>a[i+1]){
                return false;

            }
        }
        return true;
        
    }
    else if(a[0]>a[num-1])
    {
        for (int i = 0; i < num-1; i++)
        {
            if(a[i]<a[i+1]){
                return false;
            }
        }
        return true;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            if(a[i]!=a[i+1]){
                return false;
            }
        }
        return true;
        
    }
    
    

    
    
}


// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--){
	    int num;
        cin>>num;
        int a[num];
        for(int i = 0; i<num; ++i)
            cin>>a[i];
        
        bool flag = false;
        
        flag = checkRotatedAndSorted(a, num);
        
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}  // } Driver Code Ends