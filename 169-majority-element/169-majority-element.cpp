class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int maj=nums[0];
        int n=nums.size();
        int c=1;
        for(int i=1;i<n;i++){
            if(maj==nums[i])
                c++;
            else
                c--;
            if(c==0){
                maj=nums[i];
                c=1;
            }
        }
        int ans=1;
        for(int i=0;i<n;i++){
            if(maj==nums[i])
                ans++;
        }
        return ans>n/2?maj:-1;
    }
};