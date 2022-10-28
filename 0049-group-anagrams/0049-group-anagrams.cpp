class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(temp);
        }
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
};