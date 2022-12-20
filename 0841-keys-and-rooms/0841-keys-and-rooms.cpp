class Solution {
public:
    void dfs(int i,vector<vector<int>>&rooms,vector<int>&vis){
        vis[i]=1;
        for(auto x:rooms[i]){
            if(!vis[x])
                dfs(x,rooms,vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>vis(rooms.size(),0);
        dfs(0,rooms,vis);
        for(auto x:vis){
            if(!x)
                return 0;
        }
        return 1;
    }
};