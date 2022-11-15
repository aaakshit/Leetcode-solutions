class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int mx=0;
        int h[26]={0};
        int mxf=0;
        for(int i=0;i<s.size();i++){
            h[s[i]-'A']++;
            mxf=max(mxf,h[s[i]-'A']);
            while(i-start-mxf+1>k){
                h[s[start]-'A']--;
                start++;
            }
            mx=max(mx,i-start+1);
        }
        return mx;
    }
};