class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s1=0,s2=0;
        for(int i=0;i<gas.size();i++)
        {
            s1+=gas[i];
            s2+=cost[i];
        }
        int ans=0,gsum=0;
        if(s1>=s2){
        for(int i=0;i<gas.size();i++)
        {   gsum+=gas[i]-cost[i];
            if(gsum<0){
                ans=i+1;
                gsum=0;
            }
        }
            return ans;
        }
        return -1;
    }
};