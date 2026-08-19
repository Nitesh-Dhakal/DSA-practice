class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>dic;
        unordered_set<char>taken;
        for(int i=0;i<s.size();i++){
            char cs=s[i];
            char ct=t[i];
            if(dic.count(cs)){
                if(dic[cs]!=ct)return false;
            }
            else{
                if(taken.count(ct))return false;
            }
            dic[cs]=ct;
            taken.insert(ct);
        }
        return true;
    }
};