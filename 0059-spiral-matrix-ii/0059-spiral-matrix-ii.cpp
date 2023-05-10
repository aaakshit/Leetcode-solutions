class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int bottom=n-1,right=n-1,l=0,t=0;
        vector<vector<int>>ans(n,vector<int>(n));
        int x=1;
        while(t<=bottom && l<=right){
            for(int i=l;i<=right;i++){
                ans[t][i]=x++;
            }
            t++;
            for(int i=t;i<=bottom;i++){
                ans[i][right]=x++;
            }
            right--;
            if(t<=bottom){
                for(int i=right;i>=l;i--){
                    ans[bottom][i]=x++;
                }
            }
            bottom--;
            if(l<=right){
                for(int i=bottom;i>=t;i--){
                    ans[i][l]=x++;
                }
            }
            l++;
        }
        return ans;
    }
};