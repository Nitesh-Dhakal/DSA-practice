class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charmap(256, -1);
        int left=0;
        int maxlength=0;
        for(int right=0;right<s.size();right++){
            char letter=s[right];
            if(charmap[letter]>=left){
                left=charmap[letter]+1;
            }
            charmap[letter]=right; 
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};