class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=INT_MIN,c=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==0)
               c=0;
           else
               c++;
           ans=max(ans,c);
       }
        return ans;
    }
};