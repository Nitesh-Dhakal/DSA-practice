class Solution {
public:
    void dfs(int u, vector<vector<int>>& list, vector<bool>& visited) {
        visited[u] = true;
        for(int neigh : list[u]) {
            if(visited[neigh] == false) {
                dfs(neigh, list, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> list(n); 
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1 && i != j) {
                    list[i].push_back(j); 
                }
            }
        }

        vector<bool> visited(n, false);
        int provinces = 0; 
        for(int i=0;i<n;i++){         
            if(visited[i]==false){
                provinces++;
                dfs(i,list,visited);
            }
            
        }
        return provinces;
    }
};