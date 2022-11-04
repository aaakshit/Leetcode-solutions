class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1,s1=0,s2=0;
        vector<int>v1,v2;
        for(int i=0;i<nums.size();i++){
            s1+=nums[i];
            v1.push_back(s1);
            s2+=nums[nums.size()-1-i];
            v2.push_back(s2);
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
            if(v1[i]==v2[i])
                return i;
        return ans;
    }
};

 // 1 7 3   6  5  6
 // 1 8 11 17 22 28   