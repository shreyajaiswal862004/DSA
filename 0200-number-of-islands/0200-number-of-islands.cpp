class Solution {
void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>&visited, int n, int m ){
    queue<pair<int,int>>q;
    q.push({row,col});
    visited[row][col]=1;

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};


    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
        int nrow=r+delrow[i];
        int ncol=c+delcol[i];

        if(nrow<n && ncol<m && nrow>=0 && ncol>=0 && !visited[nrow][ncol] && grid[nrow][ncol]=='1'){
            visited[nrow][ncol]=1;
            q.push({nrow,ncol});
        }
    }
    }
    
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,grid,visited,n,m);
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna