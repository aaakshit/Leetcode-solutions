class Solution {
public:
    double average(vector<int>& salary) {
        int mn=INT_MAX,mx=INT_MIN,sum=0;
        for(auto x:salary){
            mn=min(mn,x);
            mx=max(mx,x);
            sum+=x;
        }
        sum-=(mn+mx);
        return sum/(double)(salary.size()-2);
    }
};