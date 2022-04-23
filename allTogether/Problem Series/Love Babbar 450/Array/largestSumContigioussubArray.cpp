int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int maxx=arr[0];
    int curr_max=arr[0];
    for(int i=1;i<n;i++){
        curr_max=max(curr_max+arr[i],arr[i]);
        
        maxx=max(maxx,curr_max);
    }
    return maxx;
}