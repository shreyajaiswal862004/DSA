class Solution {
  public:
  
    void dfs(int node, vector<int>&visited, vector<vector<int>>& adj ){
        visited[node]=1;
        
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(it,visited, adj);
            }
        }
    }
    
    int isEulerCircuit(int V, vector<vector<int>>& adj) {
        // code here
        vector<int>visited(V,0);
        int start=-1;
        for(int i=0;i<V;i++){
            if(!visited[i] && adj[i].size()>0){
                start=i;
                break;
            }
        }
        
        if(start==-1) return 2;
        
        dfs(start, visited, adj);
        
        for(int i=0;i<V;i++){
            if(!visited[i] && adj[i].size()>0){
                return 0;
            }
        }
        
        int odd=0;
        
        for(int i=0;i<V;i++){
            if(visited[i] && adj[i].size()%2!=0){
                odd++;
            }
        }
        
        if(odd==2) return 1;
        if(odd==0) return 2;
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna