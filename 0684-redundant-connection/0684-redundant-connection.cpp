class Solution {
public:
    void dfs( int u ,vector<vector<int>>& list, vector<bool>& visited){
        visited[u]=true;
        for(int neigh:list[u]){
            if(visited[neigh]==false){               
                 dfs(neigh,list,visited);
            }  
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>>list(n+1);
        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            vector<bool>visited(n+1,false);
            dfs(u,list,visited);
            if(visited[v] == true) {
                return edge; 
            }
            list[u].push_back(v);
            list[v].push_back(u);
        }
       return {};    
    }
};