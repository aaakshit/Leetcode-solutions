class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        for(auto x:nums){
            if(x<0)
                c++;
            if(x==0)
                return 0;
        }
        if(c%2)
            return -1;
        return 1;
                
    }
};