class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int l = points[0][1];
        int ans = 1;
        for(auto x : points) {
            if(x[0] > l) {
                ans++;
                l = x[1];
            }
            l = min(x[1],l);
        }
        return ans;
    }
};