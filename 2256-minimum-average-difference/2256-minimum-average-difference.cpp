class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];//27
        }
        int mn=INT_MAX,avg,p=0;
        long long int s2=0;
        for(int i=0;i<n;i++){
            s2+=nums[i];//2 7
            sum-=nums[i];//25
            if(n-i-1>0)
            avg=abs((s2/(i+1))-(sum/(n-i-1)));//5 4 3 2 1 0
            else 
                avg=abs((s2/(i+1))-(sum));
            cout<<avg<<" ";
            if(mn>avg)
                p=i;
           // cout<<p<<" ";
            mn=min(mn,avg);
        }
        return p;
    }
};