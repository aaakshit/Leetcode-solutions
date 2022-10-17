class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>v;
        vector<int>a;
        a.push_back(1);
        v.push_back(a);
        if(numRows==1)
            return v;
        else{
            for(int i=1;i<numRows;i++){
                vector<int>b;
                b.push_back(1);
                for(int j=0;j<v[i-1].size()-1;j++){
                    b.push_back(v[i-1][j]+v[i-1][j+1]);
                }
                b.push_back(1);
                v.push_back(b);
            }
        }
        return v;
    }
};