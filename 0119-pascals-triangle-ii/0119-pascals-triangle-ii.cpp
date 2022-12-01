class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        ans[0]=1;
        ans[rowIndex]=1;
        int up=rowIndex,down=1;
        long t=1;
        for(int i=1;i<rowIndex;i++){
            t=t*up/down;
            ans[i]=t;
            up--;
            down++;
        }
        return ans;
        
    }
};