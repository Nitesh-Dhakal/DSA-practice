class Solution {
public:
    void dfs(int u,vector<vector<int>>& list,vector<bool>& visited){
        visited[u]=true;
        for(int neigh:list[u]){
            if(visited[neigh]==false){
                visited[neigh]=true;
                dfs(neigh,list,visited);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>list(n);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            list[u].push_back(v);
            list[v].push_back(u);
        }
        vector<bool>visited(n,false);
        dfs(source,list,visited);
        return visited[destination];
    }
};