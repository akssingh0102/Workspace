s Solution{
    public:
    int x_pos[4]={-1,1,0,0};
    int y_pos[4]={0,0,-1,1};
    char pos[4]={'U','D','L','R'};
    vector<string> res;
    
    bool isValid(int x,int y,int n,vector<vector<int>> &m){
        if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    
    
    void findPathHelper(vector<vector<int>> &m,int x,int y,int n,vector<vector<bool>> visited,string curr){
        if(x==n-1 && y==n-1){
            res.push_back(curr);
        }
        visited[x][y]=true;
        
        for(int i=0;i<4;i++){
            if(isValid(x+x_pos[i],y+y_pos[i],n,m) && visited[x+x_pos[i]][y+y_pos[i]]==false){
                
                findPathHelper(m,x+x_pos[i],y+y_pos[i],n,visited,curr+pos[i]);
            }
        }
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        
        findPathHelper(m,0,0,n,visited,"");
        
        return res;
    }
    
    
};