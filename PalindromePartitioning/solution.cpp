class Solution {
public:
    bool isPalindrome(string s, int i, int e){
        while(i < e){
            if(s[i++] != s[e--]){
                return false;
            }
        }
        return true;
    }
    void solve(string s,vector<vector<string>>& ans, vector<string>& out, int i, int n){
        if(i == s.size()){
            ans.push_back(out);
            return;
        }
        for(int j = i; j < n; j++){
            if(isPalindrome(s,i,j)){
                out.push_back(s.substr(i, j-i+1 ));
                solve(s,ans,out,j+1,n);
                out.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s){
        vector<vector<string>> ans;
        vector<string> out;
        int n = s.size();
        solve(s,ans,out,0,n);
        return ans;
    }
};
