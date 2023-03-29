class Solution {
public:
    int solve(int idx,int time,vector<int>&satisfaction,vector<vector<int>>&dp){
        
        //base case
        if(idx>=satisfaction.size()) return 0;
        
        //check the cache
        if(dp[idx][time]!=INT_MIN)
            return dp[idx][time];
            
            
        int take =  satisfaction[idx] * time + 
                   solve(idx+1,time+1,satisfaction,dp);
        
        int nottake  =  solve(idx+1,time,satisfaction,dp);
        
        return dp[idx][time] = max(take,nottake);
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
        
        int n = satisfaction.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MIN));
            
            
        sort(satisfaction.begin(),satisfaction.end());
        
        return solve(0,1,satisfaction,dp);
    }
};
