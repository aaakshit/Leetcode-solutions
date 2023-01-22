class Solution {
public:
    bool check(string&t){
        int i=0,j=t.size()-1;
        while(i<j){
            if(t[i]!=t[j])
                return 0;
            i++;j--;
        }
        return 1;
    }
    void solve(int j,string&s,vector<string>&v,vector<vector<string>>&ans){
        if(j>=s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=j;i<s.size();i++){
            string t=s.substr(j,i-j+1);
         //   cout<<t<<endl;
          //  string gg=s.substr(i+1,s.size());
            if(check(t)){
                cout<<t<<endl;
                v.push_back(t);
                solve(i+1,s,v,ans);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        solve(0,s,v,ans);
        return ans;
    }
};