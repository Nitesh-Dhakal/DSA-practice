class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        for(string word:strs){
            string original=word;
            sort(word.begin(),word.end());
            map[word].push_back(original);
        }
        vector<vector<string>>res;
        for(auto pair:map){
            res.push_back(pair.second);
        }
        return res;
    }
};