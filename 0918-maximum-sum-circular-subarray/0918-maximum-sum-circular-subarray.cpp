class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int s1=0,s2=0,sum=0,mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            s1+=nums[i];
            mx=max(mx,s1);
            if(s1<0)
                s1=0;
        }
         for(int i=0;i<nums.size();i++){
          //  sum+=nums[i];
            s2+=nums[i];
            mn=min(mn,s2);
            if(s2>0)
                s2=0;
        }
        cout<<mx<<" "<<mn<<" "<<sum<<endl;
        if(sum-mn>0)
        return max(sum-mn,mx);
        else
            return mx;
    }
};