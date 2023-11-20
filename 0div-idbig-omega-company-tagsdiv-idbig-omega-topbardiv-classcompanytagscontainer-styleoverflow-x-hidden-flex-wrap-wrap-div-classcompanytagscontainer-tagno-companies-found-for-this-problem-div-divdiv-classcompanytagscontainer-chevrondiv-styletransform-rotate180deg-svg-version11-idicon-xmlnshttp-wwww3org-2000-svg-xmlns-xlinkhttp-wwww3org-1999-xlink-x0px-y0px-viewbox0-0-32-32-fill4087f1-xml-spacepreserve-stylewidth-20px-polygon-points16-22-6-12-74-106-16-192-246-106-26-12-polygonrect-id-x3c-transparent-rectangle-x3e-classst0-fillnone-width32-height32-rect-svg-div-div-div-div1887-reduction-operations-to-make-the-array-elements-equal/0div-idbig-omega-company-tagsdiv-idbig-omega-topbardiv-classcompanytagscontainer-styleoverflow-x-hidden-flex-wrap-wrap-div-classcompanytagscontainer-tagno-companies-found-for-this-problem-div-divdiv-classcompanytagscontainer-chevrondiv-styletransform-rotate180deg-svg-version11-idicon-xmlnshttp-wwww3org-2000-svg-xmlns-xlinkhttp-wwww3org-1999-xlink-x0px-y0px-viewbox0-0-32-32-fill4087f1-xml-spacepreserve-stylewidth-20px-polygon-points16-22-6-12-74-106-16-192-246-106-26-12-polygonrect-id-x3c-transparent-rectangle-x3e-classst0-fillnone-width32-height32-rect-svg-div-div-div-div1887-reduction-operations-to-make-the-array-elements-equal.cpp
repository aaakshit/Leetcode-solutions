class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v(nums.size());
        int c=0,p=1;
        v[0]=0;
        for(int i=1;i<nums.size();i++){
           if(nums[i]>nums[i-1]){
               v[i]=p;
               p++;
           }
            else
                v[i]=v[i-1];
        }
        for(auto x:v){
            c+=x;
        }
        
        return c;
    }
};//5 4 4 1 3