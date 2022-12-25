class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,h=matrix[0].size()-1;
        while(l<matrix.size() && h<matrix[0].size()){
            if(matrix[l][h]==target)
                return 1;
            else if(matrix[l][h]>target)
                h--;
            else
                l++;
        }
        return 0;
    }
};