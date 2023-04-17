class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=INT_MIN;
        for(auto x:candies){
            mx=max(mx,x);
        }
        vector<bool>ans;
        for(auto x:candies){
            if(x+extraCandies<mx){
                ans.push_back(false);
            }
            else
                ans.push_back(true);
        }
        return ans;
    }
};