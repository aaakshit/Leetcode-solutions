class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        string t="";
        for(int i=0;i<s.size();i++){
            t+=s[i];
            string ss="";
            if(t.size()>=3){
                ss+=t[t.size()-3];
                ss+=t[t.size()-2];
                ss+=t[t.size()-1];
            }
            if(ss=="abc"){
                t.pop_back();
                t.pop_back();
                t.pop_back();
            }
        }
        if(t.size()==0)
            return 1;
        return 0;
    }
};