class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int c=0;
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto x:m){
            if(k==0){
                if(x.second>1)
                    c++;
            }
            else{
                if(m.find(k+x.first)!=m.end())
                    c++;
            }
        }
        return c;
    }
};