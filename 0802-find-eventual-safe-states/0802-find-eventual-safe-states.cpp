class Solution {
public:
    vector<int>result;
    bool dfs(int u,vector<vector<int>>& graph,vector<bool>& visited, vector<bool>& pathvisited,vector<bool>& safe){
        visited[u]=true;
        pathvisited[u]=true;
        for(int neigh:graph[u]){
            if (safe[neigh]) {
                continue;
            }
            if(visited[neigh]==false){
                if(dfs(neigh,graph,visited,pathvisited,safe)==true)return true;
            }
            else if(pathvisited[neigh]==true)return true;
        }
        result.push_back(u);
        pathvisited[u]=false;
        safe[u]=true;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        result.clear();
        int n = graph.size();
        vector<bool>visited(n,false);
        vector<bool>pathvisited(n,false);
        vector<bool>safe(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                dfs(i,graph,visited,pathvisited,safe);
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};