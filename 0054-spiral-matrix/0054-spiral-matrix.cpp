class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int b=matrix.size()-1,r=matrix[0].size()-1,l=0,t=0;
        while(l<=r && t<=b){
             for(int i=l;i<=r;i++){
                v.push_back(matrix[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++){
                v.push_back(matrix[i][r]);
            }
            r--;
            if(t<=b){
            for(int i=r;i>=l;i--)
                v.push_back(matrix[b][i]);
            b--;
            }
            if(l<=r){
            for(int i=b;i>=t;i--){
                v.push_back(matrix[i][l]);
            }
            l++;
          }
        }
            return v;
    }
};