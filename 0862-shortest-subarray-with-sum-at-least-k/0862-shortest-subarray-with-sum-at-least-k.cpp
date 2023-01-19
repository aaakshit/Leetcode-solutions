class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        deque<pair<long long int,long long int>>dq;long long int sum=0,mn=INT_MAX;
        for(long long int i=0;i<nums.size();i++){
            sum+=nums[i];
            int curr=-1;
             if(sum>=k)
                mn=min(mn,i+1);
             while(!dq.empty()&&(sum-dq.front().first)>=k){
           // cout<<sum<<" ";
                 curr=dq.front().second;
            dq.pop_front();
        }
            if(curr!=-1)
                mn=min(mn,i-curr);
            while(!dq.empty()&&dq.back().first>sum){
                dq.pop_back();
            }
            dq.push_back({sum,i});
           
        }
        // while(!dq.empty()){
        //     cout<<dq.front().first<<" ";
        //     dq.pop_front();
        // }
       
        // mn=min(mn,dq.back().second-dq.front().second+1);
        if(mn==INT_MAX)
            return -1;
        return mn;
    }
};