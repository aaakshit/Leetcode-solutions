class Solution {
public:
    void solve(int i,vector<vector<int>>& rooms,vector<int>&vis){
        if(!vis[i]){
            vis[i]=1;
            for(auto x:rooms[i]){
                solve(x,rooms,vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        int m=rooms[0].size();
        vector<int>vis(n,0);
        solve(0,rooms,vis);
        for(int i=0;i<n;i++){
            if(!vis[i])
                return 0;
        }
        return 1;
    }
};