class Solution {
public:
    // #define m 1e9+7
    long long int power(long long int x, long long int y, int p)
{
 
    long long int res = 1;
 
    while (y > 0) {
 
        if (y % 2 == 1)
            res = (res * x)%p;
 
        y = y >> 1;
 
        x = (x * x)%p;
    }
    return res-1 % p;
}
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c=0,i=0,j=nums.size()-1;
        for(auto x:nums)
            if(x+x<=target)
                c++;
        while(i<j){
            if(nums[i]+nums[j]<=target){
                long long int x=power(2,j-i,1000000007);
                x%=1000000007;
                c+=x;
                c%=1000000007;
                i++;
            }
            else
                j--;
        }
        return c%1000000007;
    }
};