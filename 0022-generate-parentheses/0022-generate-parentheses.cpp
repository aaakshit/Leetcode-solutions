class Solution {
public:
   
    void solve(int i,int o,int c,int n,vector<string>&ans,string&s){
        if(i==2*n){
           // cout<<s<<endl;
            ans.push_back(s);
            return;
        }
        if(o<n){
            s.push_back('(');
            solve(i+1,o+1,c,n,ans,s);
            s.pop_back();
        }
        if(c<o){
            s.push_back(')');
            solve(i+1,o,c+1,n,ans,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
         string s="";
        solve(0,0,0,n,ans,s);
        return ans;
    }
};