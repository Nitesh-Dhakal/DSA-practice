class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& color,int u,int current){
        color[u]=current;
        for(int neigh:graph[u]){
            if(color[neigh]==-1){
                if(dfs(graph,color,neigh,1-current)==false)return false;
            }
            else if(color[neigh]==current)return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(dfs(graph,color,i,0)==false)return false;
            }
        }
        return true;
    }
};