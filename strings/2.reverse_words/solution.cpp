class Solution {
public:
    /*string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } 
            else if(!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());
    
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i < words.size() - 1) {
                result += " ";
            }
        }
        
        return result;   
    } */
    string reverseWords(string s) {
        string res="";
        int i=s.size()-1;
        while(i>=0){
            while(i>=0 && s[i]==' ') i--;
            if(i<0) break;
            int end=i;
            while(i>=0 && s[i]!=' ') i--;
            string word=s.substr(i+1,end-i);
            if(!res.empty()){
                res+=" ";
            }
            res+=word;
        }
        return res;
    }
};