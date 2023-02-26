class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int j,string s1,string s2){
        if(i<0)
            return j+1;
        if(j<0)
            return i+1;
       
        if(s1[i]==s2[j]){
            return dp[i][j]=solve(i-1,j-1,s1,s2);
        }
         if(dp[i][j]!=-1)
            return dp[i][j];
        int a=solve(i-1,j,s1,s2);
        int b=solve(i,j-1,s1,s2);
        int c=solve(i-1,j-1,s1,s2);
        return dp[i][j]=1+min(a,min(b,c));
    }
    int minDistance(string word1, string word2) {
        dp.resize(word1.size()+5,vector<int>(word2.size()+5,-1));
        return solve(word1.size()-1,word2.size()-1,word1,word2);
       
    }
};