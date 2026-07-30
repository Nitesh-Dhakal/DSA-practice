class Solution {
public:
    string reverseWords(string s) {
        int i=s.size()-1;
        string result= "";
        int right=0;
        while(i>=0){
            while(i>=0 && s[i]==' '){
                 i--;
                
            }
             right=i;
            if(i<0)break;
            while(i>=0 && s[i]!= ' '){
                i--;
            }
            if(result.length()>0){
                result +=" ";
            }
            result += s.substr(i + 1, right - i);
        }
        return result;
    }
    
};