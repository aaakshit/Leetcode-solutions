class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            int mx=INT_MIN;
            for(int j=nums2.size()-1;j>=0;j--){
                if(nums2[j]>nums1[i])
                    mx=nums2[j];
                else if(nums2[j]==nums1[i])
                    break;
            }
            if(mx==INT_MIN)
                v.push_back(-1);
            else
                v.push_back(mx);
        }
        return v;
    }
};