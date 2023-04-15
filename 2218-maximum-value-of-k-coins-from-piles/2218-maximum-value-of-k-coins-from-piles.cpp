class Solution {
public:
    int dp[1001][2001];

    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        memset(dp, -1, sizeof(dp));
        for(auto &pile : piles){
            for(int i=1;i<pile.size();i++){
                pile[i] += pile[i-1];
            }
        }
        return helper(piles, k, n, 0);
    }

    int helper(vector<vector<int>>& prefixSum, int k, int &n, int idx){
        if( k <= 0 || idx >= n ){
            return 0;
        }
        if( dp[idx][k] != -1 ) return dp[idx][k];

        int maxValue = helper(prefixSum, k, n, idx+1);
        int limit = (k <= prefixSum[idx].size())?  k : prefixSum[idx].size();

        for(int i=0; i<limit; i++){
            maxValue = max(maxValue, (prefixSum[idx][i] + helper(prefixSum, (k-i-1), n, idx+1)));
        }
        return dp[idx][k] = maxValue;
    }
};