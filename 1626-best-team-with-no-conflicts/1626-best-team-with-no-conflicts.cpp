class Solution {
public:
 int solve(int curr_idx,int prev_idx,vector<pair<int,int>> &ageScore,vector<vector<int>> &dp)
    {
        // out of bound means no players are left
        if(curr_idx >= ageScore.size()) return 0;

        // Already calculated (we use +1 over here because in vector we can not represent any idx as -1)
        if(dp[curr_idx][prev_idx+1]!=-1) return dp[curr_idx][prev_idx+1];

        // if my prev_idx is -1 or curr_idx score value is bigger than prev_idx score value then consider current player else not
        int pick = 0;
        int not_pick = 0;
        if(prev_idx == -1 || ageScore[curr_idx].second >= ageScore[prev_idx].second)
        {
            //       curr idx player
            pick = ageScore[curr_idx].second + solve(curr_idx+1,curr_idx,ageScore,dp);
        }

        not_pick = 0 + solve(curr_idx+1,prev_idx,ageScore,dp);

        return dp[curr_idx][prev_idx+1] = max(pick,not_pick);                    // max one
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) 
    {
        int n = scores.size();

        // storing {age,score} as a pair
        vector<pair<int,int>> ageScore;
        for(int i=0;i<n;i++)
        {
            ageScore.push_back({ages[i],scores[i]});
        }

        // sort the pair in ascending order based on ages
        sort(ageScore.begin(),ageScore.end());

        // DP
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return solve(0,-1,ageScore,dp);
    }
};