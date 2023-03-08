#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int *arr,int &n){
    int count = 0;
    if(n==0) return count;
    else count=1;

    for(int i=1;i<n;i++){
        if(arr[i]%2 != arr[i-1]%2){
            count++;
        }
        else{
            count=1;
        }
    }
    return count;

}



int main() {
     int arr[] = {5, 10, 20, 6, 3, 8}, n = 6;
     cout<<maxEvenOdd(arr, n);
    
}