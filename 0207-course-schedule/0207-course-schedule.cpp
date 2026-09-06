class Solution {
public:
    bool dfs(vector<vector<int>>& adj,int u,vector<bool>&visited,vector<bool>&pathvisited){
        visited[u]=true;
        pathvisited[u]=true;
        for(int neigh:adj[u]){
            if(visited[neigh]==false){
                if(dfs(adj,neigh,visited,pathvisited)==true)return true;
            }
            else if(pathvisited[neigh]==true)return true;
        }
        pathvisited[u]=false;
        return false;
    }
    bool canFinish(int num, vector<vector<int>>& edges) {
        vector<vector<int>>adj(num);
        vector<bool>visited(num,false);
        vector<bool>pathvisited(num,false);
        for(auto edge:edges){
            int u = edge[1];
            int v = edge[0];
            adj[u].push_back(v);
        }
        for(int i = 0; i < num; i++) {
            if(visited[i] == false) {
                if(dfs(adj, i, visited, pathvisited) == true) return false;
            }
        }
        return true;
    }
};