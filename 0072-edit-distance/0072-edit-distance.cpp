class Solution {
public:
    int helper(int i,int j,string & word1,string & word2,vector<vector<int>>& memo){
        if(i==word1.size())return word2.size()-j;
        if(j==word2.size())return word1.size()-i;
        if(memo[i][j] != -1)return memo[i][j];
        if(word1[i]==word2[j]){
            memo[i][j]=helper(i+1,j+1,word1,word2,memo);
        }
        else{
            int replace=helper(i+1,j+1,word1,word2,memo);
            int del=helper(i+1,j,word1,word2,memo);
            int insert=helper(i,j+1,word1,word2,memo);
            memo[i][j]=1+min({replace,del,insert});
        }
        return memo[i][j];
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>memo(n,vector<int>(m+1,-1));
        return helper(0,0,word1,word2,memo);
    }
};