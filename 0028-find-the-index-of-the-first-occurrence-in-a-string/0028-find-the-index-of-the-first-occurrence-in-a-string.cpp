class Solution {
public:

    int strStr(string haystack, string needle) {
      int window=needle.size();
      int n=haystack.size();
      if(window>n)return -1;
      for(int i=0;i<=n-window;i++){
        string sub=haystack.substr(i,window);
        if(sub==needle){
            return i;
        }
      }
      return -1;
    }
};