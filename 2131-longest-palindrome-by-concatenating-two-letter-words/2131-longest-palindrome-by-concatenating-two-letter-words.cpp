class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>m;
        int c=0,c1=0;
        for(int i=0;i<words.size();i++){
            // cout<<words[i]<<" ";
            string s = words[i];
            reverse(s.begin(),s.end());
            if(m[s]>0){
                c+=4;
                m[s]--;
            }
            else
                m[words[i]]++;
            // if(s==words[i]&& c1<2){
            //     c1+=2;
            // m[s]++;
            // }
            // else if(m.find(s)!=m.end() && s==words[i]){
            //     c+=2;
            //     m[s]--;
            //     }
            // else if(m.find(s)!=m.end()&&s!=words[i]){
            //     c+=4;
            //     m[s]--;
            // }
            // else
            // m[words[i]]++;
        }
        for(auto x:m){
            if(x.first[0]==x.first[1] && x.second>0)
                return c+2;
        }
        return c;
    }
};