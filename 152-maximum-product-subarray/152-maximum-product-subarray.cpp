class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1,pro=1;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            mx=max(mx,p);
            if(p==0)
                p=1;
        }
         for(int i=nums.size()-1;i>=0;i--){
            pro*=nums[i];
            mx=max(mx,pro);
            if(pro==0)
                pro=1;
        }
        return mx;
    }
};