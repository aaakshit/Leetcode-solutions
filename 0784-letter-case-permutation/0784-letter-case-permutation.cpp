class Solution {
public:
    vector<string>ans;
    void solve(string s, int i){
        if(i>=s.size()){
            ans.push_back(s);
            return;
        }
        if((s[i]>='a' && s[i]<='z')){
            string t=s.substr(0,i)+char(s[i]-32)+s.substr(i+1);
            solve(s,i+1);
            solve(t,i+1);
        }
         else if((s[i]>='A' && s[i]<='Z')){
            string t=s.substr(0,i)+char(s[i]+32)+s.substr(i+1);
            solve(s,i+1);
            solve(t,i+1);
        }
        else{
            solve(s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
         string s1;
        // ans.push_back(s);
        solve(s,0);
      
        return ans;
    }
};