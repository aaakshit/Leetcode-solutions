class Solution {
public:
    void solve(int i,string &digits,unordered_map<int,string>&m,vector<string>&ans,string &s){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }
        string gg=m[digits[i]-'0'];
        for(auto x:gg){
            s.push_back(x);
            solve(i+1,digits,m,ans,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string s="";
        if(digits.size()==0)
            return ans;
        unordered_map<int,string>m;
        m[1]="";
        m[2]="abc";
         m[3]="def";
         m[4]="ghi";
         m[5]="jkl";
         m[6]="mno";
         m[7]="pqrs";
         m[8]="tuv";
         m[9]="wxyz";
         m[0]=" ";
        solve(0,digits,m,ans,s);
        return ans;
        
    }
};