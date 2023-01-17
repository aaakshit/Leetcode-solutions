class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int>m;
        for(auto x:nums){
            m.insert(x);
        }
       // vector<int>ans(m.size());
        // int i=0;
        // for(auto x:m){
        //     ans[i++]=x;
        // }
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]-1)!=m.end()){
                continue;
            }
            else{
                int ans=0;
                int gg=nums[i];
                while(m.find(gg)!=m.end()){
                    ans++;
                    gg++;
                }
                c=max(c,ans);
            }
        }
        return c;
    }
};