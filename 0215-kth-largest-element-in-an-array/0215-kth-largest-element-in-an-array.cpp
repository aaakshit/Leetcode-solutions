class Solution {
public:
    int cnt(int mid,vector<int>&nums){
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(mid>=nums[i])
                c++;
        }
        return c;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        k=nums.size()-k;
        int l=mn,h=mx,mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(cnt(mid,nums)<=k)
                l=mid+1;
            else
                h=mid-1;
           
            
        }
        return l;
    }
};