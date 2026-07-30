class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        int i = ransomNote.size();
        int j = magazine.size();
        
        if(j < i) return false;
        
        for(int k = 0; k < j; k++){
            count[magazine[k] - 'a']++;
        }
        
        for(int k = 0; k < i; k++){
            count[ransomNote[k] - 'a']--;
            if(count[ransomNote[k] - 'a'] < 0){
                return false;
            }
        }
        
        return true;
    }
};