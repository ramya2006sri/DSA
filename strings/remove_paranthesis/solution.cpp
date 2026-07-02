class Solution {
public:
    string removeOuterParentheses(string s) {
        string r="";
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
                if(cnt>1) r+=s[i];
            }
            else if(s[i]==')'){
                cnt--;
                if(cnt>0) r+=s[i];
            }
        }
        return r;
    }
};