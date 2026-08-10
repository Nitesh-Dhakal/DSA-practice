class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        vector<int> s1_count(26, 0);
        vector<int> s2_count(26, 0);
        int window=s1.size();
        for(int i=0;i<window;i++){
            s1_count[s1[i] - 'a']++;
            s2_count[s2[i] - 'a']++;
        }
        if (s1_count == s2_count) return true;
        
        for(int right=window;right<s2.size();right++){
            s2_count[s2[right]-'a']++;
            s2_count[s2[right-window]-'a']--;
            if (s1_count == s2_count) return true;
        }
        return false;
    }
};