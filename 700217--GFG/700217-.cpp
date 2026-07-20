class Solution {
private:
    void bfs(int node, vector<vector<int>> &adj,vector<int>&ans, vector<bool>&vis){
        queue<int>q;
        q.push(node);
        vis[node]=true;
        
        while(!q.empty()){
            int a=q.front();
            q.pop();
            ans.push_back(a);
            
            for(auto i:adj[a]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                }
                
            }
        }
    }
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        
        
        int n=adj.size();
        vector<bool>vis(n,false);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i,adj,ans,vis);
            }
        }
        return ans;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna