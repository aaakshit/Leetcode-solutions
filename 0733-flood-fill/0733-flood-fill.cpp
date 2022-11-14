class Solution {
public:
    int real;
    void dfs(vector<vector<int>>& image, int sr, int sc, int color){
        if(sr<0 || sr>=image.size() ||sc<0 ||sc>image[0].size() || image[sr][sc]!=real||image[sr][sc]==color)
            return;
        image[sr][sc]=color;
        dfs(image,sr,sc+1,color);
        dfs(image,sr+1,sc,color);
        dfs(image,sr-1,sc,color);
        dfs(image,sr,sc-1,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        real=image[sr][sc];
        dfs(image,sr,sc,color);
        return image;
    }
};