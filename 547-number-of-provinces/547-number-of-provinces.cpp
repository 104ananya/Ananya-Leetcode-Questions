class Solution {
public:
    
    void dfs (int node, vector<int> adj[], vector <int> &vis){
        
        vis[node] = 1;
        
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it, adj, vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V = isConnected.size();
        
        // converting matrix to adj list
        vector <int> adj[V];
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector <int> vis(V, 0);
        int count = 0;
        
        // increasing conter everytime dfs is called
        for(int i= 0; i<V; i++){
            if(!vis[i]){
                count++;
                dfs(i, adj, vis);
            }
        }   
        
        return count;
    }
};