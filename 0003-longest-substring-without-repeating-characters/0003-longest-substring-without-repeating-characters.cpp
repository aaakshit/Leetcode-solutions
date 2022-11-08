class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256);
        int i=0,j=0,c=0;
        while(j<s.size()){
            char a=s[j];
            v[a]++;
            while(v[a]>1){
                char b=s[i];
                v[b]--;
                i++;
            }
            c=max(c,j-i+1);
            j++;
        }
        return c;
    }
};