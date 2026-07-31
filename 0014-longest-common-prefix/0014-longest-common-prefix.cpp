class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=strs[0].size();
        int j=strs.size();
        string ans = "";
        for(int k=0;k<i;k++){
            char first=strs[0][k];
            for(int l=1;l<j;l++){
                if(k == strs[l].size() || first!=strs[l][k]){
                    return ans;
                }
            }ans=ans+first;
        }
        return ans;
    }
    
};