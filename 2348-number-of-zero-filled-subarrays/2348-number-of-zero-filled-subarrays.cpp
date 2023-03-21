class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long totalSubArrays = 0;
        int  currentSubArrays = 0;

        for(auto& value : nums)
        {
            if(value != 0)
            {
                currentSubArrays = 0;
            }
            else
            {
                currentSubArrays ++;
                totalSubArrays += currentSubArrays;
            }
        }
        
        return totalSubArrays;
    }
};