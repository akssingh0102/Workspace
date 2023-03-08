//*********************Find first and last positions of an element in a sorted array*******************
//https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

#include <bits/stdc++.h>
using namespace std;
 

int first(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
 
int last(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
 
int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
 
    int x = 8;
    printf("First Occurrence = %d\t",
           first(arr, x, n));
    printf("\nLast Occurrence = %d\n",
           last(arr, x, n));
 
    return 0;
}