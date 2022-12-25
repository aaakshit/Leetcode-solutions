class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int l=0,h=nums.size()-1,mid;
        while(l<=h){
            if(l+1==h)return min(nums[l],nums[h]);
            mid=(l+h)/2;
            if(nums[mid]>nums[h])
                l=mid;
            else
                h=mid;
        }
        return nums[mid];
    }
};