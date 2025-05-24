class Solution {
public:
    bool isValid(string s) {
        stack<char> vanlindrome;
        for(auto i=0; i<s.size(); i++){
            if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if(vanlindrome.empty()){
                    return false;
                }
  
                if((s[i]==')' && vanlindrome.top()!='(')
                ||(s[i]=='}' && vanlindrome.top()!='{')||
                (s[i]==']' && vanlindrome.top()!='[')){
                    return false;
                }
                vanlindrome.pop();
            }else{
                vanlindrome.push(s[i]);
            }
        }

        return vanlindrome.empty();
    }
};
