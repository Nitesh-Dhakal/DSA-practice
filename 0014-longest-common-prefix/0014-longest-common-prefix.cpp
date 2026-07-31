class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=strs[0].size();
        int j=strs.size();
        string ans = "";
        for(int k=0;k<i;k++){
            char first=strs[0][k];
         //   if(s)
            for(int l=1;l<j;l++){
                if(first!=strs[l][k]){
                    
                    return ans;
                }
            }ans=ans+first;
        }
        
        return ans;
    }
    
};