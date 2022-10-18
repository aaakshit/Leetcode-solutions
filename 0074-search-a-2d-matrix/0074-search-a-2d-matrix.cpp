class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix[0].size();
        int c=matrix.size();
        int l=0,h=c-1;
        int row=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[mid][0]<=target && matrix[mid][r-1]>=target){
                row=mid;
                break;
            }
            else if(matrix[mid][r-1]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        if(row==-1)
            return false;
        int start=0,end=r-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return false;
    }
};