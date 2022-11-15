class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //string ans="";
        vector<int>v;
        if(p.size()>s.size())
        return v;
        int h[26]={0};
        for(auto x:p){
            h[x-'a']++;
        }
        int right=0,left=0,count=p.size();
        while(right < s.size()){
            if(h[s[right++]-'a']-- >=1)
                count--;
            if(count==0)
                v.push_back(left);
            if((right-left)==p.size()&&h[s[left++]-'a']++ >=0)
                count++;
        }
        return v;
    }
};