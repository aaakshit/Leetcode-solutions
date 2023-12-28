class Solution {
public:
    int minCost(string colors, vector<int>& v) {
        int c=0,i=0,j=0,mx=INT_MAX;
        while(i<v.size()&&j<v.size()){
            int x=0,mx=0;
            while(j<v.size() && colors[i]==colors[j]){
                x+=v[j];
                mx=max(mx,v[j]);
                j++;
            }
            c+=x-mx;
            i++;
        }
        return c;
    }
};