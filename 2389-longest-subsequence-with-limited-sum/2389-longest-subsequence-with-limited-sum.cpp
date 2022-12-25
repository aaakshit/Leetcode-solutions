class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        vector<int>v;
        sort(nums.begin(),nums.end());
       // sort(q.begin(),q.end());
        int sum=0;
        for(auto x:nums){
            sum+=x;
            v.push_back(sum);
        }
        vector<int>ans;
        int j=0;
        for(int i=0;i<q.size();i++){
            j=0;
        while(j<nums.size()){
            if(v[j]>q[i]){
                ans.push_back(j);
                break;
            }
            j++;
        }
            if(j==nums.size()&&q[i]>=v[j-1])
                ans.push_back(j);
        }
        if(ans.size()==0)
            return {0};
        // int p=ans.size();
        // while(p<q.size()){
        //     ans.push_back(nums.size());
        //     p++;
        // }
        
        return ans;
        
    }
};