class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int l=0,h=n-1,mid;
        while(l<=h){
            if(l+1==h)return min(nums[l],nums[h]);
            mid=(l+h)/2;
            if(nums[mid]>nums[h])
                l=mid;
            // else if(nums[mid]==nums[h]&& nums[mid+1]<nums[mid])
            //     l=mid;
            // else if(nums[mid]==nums[l])
            //     l=mid;
             else if(nums[mid]<nums[h])
                h=mid;
            else
                h--;
        }
        return nums[mid];
    }
};