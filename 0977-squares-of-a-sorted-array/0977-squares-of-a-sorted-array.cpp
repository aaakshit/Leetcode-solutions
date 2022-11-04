class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int i=0,j=nums.size()-1;
        
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                v.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                v.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};