class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int pivot=0;
        while(start<=end){
            int mid=(start+end)/2;
            int next=(mid+1)%nums.size();
            int pre=(mid+nums.size()-1)%nums.size();
            if(nums[mid]<=nums[pre]&&nums[mid]<=nums[next]){
                pivot=mid;
                break;
            }
           
            if(nums[mid]<=nums[end])
                end=mid-1;
        else if(nums[mid]>=nums[start])
                start=mid+1;
        }
        //return pivot;
        int l=0,h=pivot-1;int ans=-1,ans2=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]>=target)
                h=mid-1;
            else
                l=mid+1;
        }
        l=pivot;h=nums.size()-1;
          while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                ans2=mid;
                break;
            }
            else if(nums[mid]>=target)
                h=mid-1;
            else
                l=mid+1;
        }
        if(ans==-1 && ans2==-1)
            return -1;
        else if(ans!=-1)
            return ans;
        else
            return ans2;
    }
};