class Solution {
    bool x = false;
public:
    bool canReach(vector<int>& arr, int start) {
        return dfs(arr , start);
    }
    bool dfs(vector<int>& arr , int cur){
        if(cur >= arr.size() || cur < 0 || arr[cur] == -1) return false;
        if(arr[cur] == 0){
            return true;
        }
        int off = arr[cur];
        arr[cur] = -1;
        return dfs(arr , cur + off) || dfs(arr , cur - off);
        
    }
};