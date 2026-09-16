class Solution {
public:
    int helper(int i,int j,string& text1, string& text2,vector<vector<int>>& memo){
        if(i==text1.size() || j==text2.size())return 0;
        
        if(memo[i][j] != -1)return memo[i][j];
        if(text1[i]==text2[j]){
            memo[i][j]=1+helper(i+1,j+1,text1,text2,memo);
        }
        else{
            int t1=helper(i+1,j,text1,text2,memo);
            int t2=helper(i,j+1,text1,text2,memo);
            memo[i][j]=max(t1,t2);
        }
        return memo[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>memo( n,vector<int>(m+1,-1));
        return helper(0,0,text1,text2,memo);
    }
};