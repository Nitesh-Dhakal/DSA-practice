class Solution {
public:

    int strStr(string haystack, string needle) {
        int h_len = haystack.size();
        int n_len = needle.size();
        int j=0;
        for(int i =0;i<=h_len-n_len;i++){
            for(j=0;j<n_len;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==needle.size()){
                return i;
            }
        }
        return -1;
    }
};