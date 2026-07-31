class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size())return ans;
        vector<int>pcount(26,0);
        vector<int>scount(26,0);
        int window=p.size();
        for(int i=0;i<window;i++){
            pcount[p[i]-'a']++;
            scount[s[i]-'a']++;
        }
        if(pcount==scount){
            ans.push_back(0);
        }
        for(int i=window;i<s.size();i++){
             scount[s[i]-'a']++;
             scount[s[i-window]-'a']--; 
              
              if(pcount==scount){
            ans.push_back(i-window+1);
            } 
        }  
      return ans;
    }
};