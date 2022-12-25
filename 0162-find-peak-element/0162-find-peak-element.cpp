class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=nums.size()-1;
        int mid;
        while(l<h){
            mid=(l+h)/2;
            if(nums[mid]>nums[mid+1])
                h=mid;
            else
                l=mid+1;
        }
        return l;
    }
};