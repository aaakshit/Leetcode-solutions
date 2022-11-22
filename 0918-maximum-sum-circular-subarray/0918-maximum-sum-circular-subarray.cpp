class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tsum=0,s1=0,s2=0,mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
            s1+=nums[i];
            s2+=nums[i];
            mx=max(mx,s1);
            if(s1<0)
                s1=0;
            mn=min(mn,s2);
            if(s2>0)
                s2=0;
        }
        if(tsum==mn)
            return mx;
        return max(mx,tsum-mn);
    }
};