class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i=0,j=0,k=0,c=2;
        // int n=nums.size();
        // while(i<n && j<n && k<n){
        //     if(nums[i]==nums[j]&&c>0){
        //         j++;
        //         c--;
        //     }
        //     else if(nums[i]!=nums[j]){
        //         i=j;
        //         c=2;
        //     }
        //     else{
        //         k=j;
        //         while(k<n&&nums[k]==nums[j])
        //             k++;
        //         i=j;
        //         while(j<n&&j!=k)
        //             nums[j++]=nums[k];
        //         j=i;
        //         c=2;
        //     }
        // }
        // return i+1;
        int i=0;
        for(auto x:nums){
            if(i<2 or x>nums[i-2])
                nums[i++]=x;
        }
        return i;
    }
};