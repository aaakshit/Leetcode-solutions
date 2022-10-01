class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        vector<int>v(nums.size(),0);
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)c++;
            else
            pro*=nums[i];
        }
        if(c>=2)return v;
        for(int i=0;i<nums.size();i++){
            if(c!=0 && nums[i]==0)v[i]=pro;
            else if(c==0 && nums[i]!=0)v[i]=pro/nums[i];
            else v[i]=0;
        }
        return v;
    }
};