class Solution {
public:
    int c,oc;
    void solve(int i, int j , vector<vector<int>>&img,vector<vector<bool>>&vis){
        if(i<0 || j<0 || i>=img.size()|| j>=img[0].size() || img[i][j]==c||img[i][j]!=oc)
            return;
      //  vis[i][j]=1;
        img[i][j]=c;
        solve(i+1,j,img,vis);
        solve(i,j+1,img,vis);
        solve(i-1,j,img,vis);
        solve(i,j-1,img,vis);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>>vis(image.size(),vector<bool>(image.size(),0));
        c=color;
        oc=image[sr][sc];
        solve(sr,sc,image,vis);
        return image;
    }
};