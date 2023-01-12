class Solution {
public:
    static bool cmp(int a,int b){
        string x=to_string(a);
        string y=to_string(b);
        string s1=x+y;
        string s2=y+x;
        return s1>s2;
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        sort(nums.begin(),nums.end(),cmp);
        for(int i=0;i<nums.size();i++){
            ans+=to_string(nums[i]);
        }
        int c=0;
        for(auto x:ans){
            if(x=='0')
                c++;
        }
        if(c==ans.size())
            return "0";
        return ans;
    }
};