class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int c=0,ans=0;
        for(auto x:s){
            if(x=='1')
                c++;
            else
                ans++;
            ans=min(ans,c);
        }
        return ans;
    }
};