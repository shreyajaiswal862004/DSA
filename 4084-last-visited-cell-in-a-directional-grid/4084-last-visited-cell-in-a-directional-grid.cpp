class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int r=0,c=0;

        q.push({0,0});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;

            q.pop();

            if(row<0 || row>=n || col<0 || col>=m) break;
            if(vis[row][col]) break;

            if(grid[row][col]=='R') q.push({row,col+1});
            if(grid[row][col]=='U') q.push({row-1,col});
            if(grid[row][col]=='D') q.push({row+1,col});
            if(grid[row][col]=='L') q.push({row,col-1});

            vis[row][col]=1;
            r=row;
            c=col;
            
        }
        return {r,c};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna