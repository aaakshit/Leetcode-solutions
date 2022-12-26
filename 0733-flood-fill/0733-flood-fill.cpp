class Solution {
public:
    int oldcolor;
    void solve(vector<vector<int>>& image, int i, int j, int color){
        if(i<0 || i>=image.size()||j<0 || j>=image[0].size()||image[i][j]!=oldcolor || image[i][j]==color)
            return;
        image[i][j]=color;
         solve(image,i+1,j,color);
         solve(image,i-1,j,color);
         solve(image,i,j+1,color);
         solve(image,i,j-1,color);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        oldcolor=image[sr][sc];
        solve(image,sr,sc,color);
        return image;
    }
};