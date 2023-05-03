class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        vector<int>v1,v2;
        unordered_map<int,int>m1,m2;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(m2.find(nums1[i])==m2.end()){
                v1.push_back(nums1[i]);
                m2[nums1[i]]++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(m1.find(nums2[i])==m1.end()){
                v2.push_back(nums2[i]);
                m1[nums2[i]]++;
            }
        }
        return {v1,v2};
    }
};