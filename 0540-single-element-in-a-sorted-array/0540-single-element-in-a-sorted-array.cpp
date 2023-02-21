class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int l=0,h=nums.size()-1,mid;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[h]!=nums[h-1])
            return nums[h];
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(nums[mid]==nums[mid-1]){
                if(mid%2==0 && (mid-1)%2==1){
                    h=mid-1;
                }
                 // if((mid-1)%2==0 && (mid)%2==1){
                else
                    l=mid+1;
                // }
            }
            if(nums[mid]==nums[mid+1]){
                if(mid%2==0 && (mid+1)%2==1){
                    l=mid+1;
                }
                 // if((mid+1)%2==0 && (mid)%2==1){
                else
                    h=mid-1;
                // }
            }
            // else
            //     break;
        }
        return mid;
    }
};