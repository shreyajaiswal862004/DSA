class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int inicolor=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        if (inicolor == color) return image;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        visited[sr][sc]=true;
        image[sr][sc]=color;
        int delrow[]={0,-1,0,1};
        int delcol[]={-1,0,1,0};

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;

            q.pop();

            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];

                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && image[nrow][ncol]==inicolor && !visited[nrow][ncol]){
                    image[nrow][ncol]=color;
                    q.push({nrow,ncol});
                    visited[nrow][ncol]=true;
                }
            }
        }
        return image;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna