class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>t1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'&&!s1.empty())
                s1.pop();
            else if(s[i]!='#')
                s1.push(s[i]);
        }
         for(int i=0;i<t.size();i++){
            if(t[i]=='#'&&!t1.empty())
                t1.pop();
            else if(t[i]!='#')
                t1.push(t[i]);
        }
        if(s1.empty()&&t1.empty())
            return 1;
        if(s1.size()>t1.size()||s1.size()<t1.size())
            return false;
        else{
            while(!s1.empty()&&!t1.empty()){
                if(s1.top()!=t1.top()){
                    return false;
                }
                else
                {
                    s1.pop();t1.pop();
                }
            }
        }
        return true;
    }
};