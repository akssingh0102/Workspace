

int coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int distance = 0;
    vector<bool> visited(n,false);
    visited[0] = true;
    for(int i=1;i<n;i++){
        
        int curr_dist =max(abs(A[i]-A[i-1]) , abs(B[i]-B[i-1]));
        distance += curr_dist;
      
    }
    return distance;
}
