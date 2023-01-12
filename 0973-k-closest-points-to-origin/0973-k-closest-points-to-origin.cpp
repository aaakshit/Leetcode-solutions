class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b){
       return a[2]<b[2];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<vector<int>>v;
        for(int i=0;i<p.size();i++){
            int a=p[i][0]*p[i][0]+p[i][1]*p[i][1];
            p[i].push_back(a);
        }
        sort(p.begin(),p.end(),cmp);
        for(int i=0;i<k;i++){
            p[i].pop_back();
            v.push_back(p[i]);
        }
        return v;
    }
};