// Majority element is an element that appears more than n/2 times in an array of size n. 
// In this video, two methods to find majority element in an array are discussed.
#include <iostream>
#include <cmath>
using namespace std;


int findMajority(int arr[], int n)
{
	int res = 0, count = 1;

    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}

    	count = 0;

    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;

    	if(count <= n /2)
    		res = -1;

    	return res; 
}



int main() {
	
     int arr[] = {8, 8, 6, 6, 6, 4, 6}, n = 7;

     cout<<findMajority(arr, n);
    
}