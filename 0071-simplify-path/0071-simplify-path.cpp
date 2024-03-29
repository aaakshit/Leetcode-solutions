class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;string res="";
       for(int i=0;i<path.size();i++){
           if(path[i]=='/')
               continue;
           string s="";
           while(i<path.size()&&path[i]!='/'){
               s+=path[i];
               ++i;
           }
           if(s==".")
               continue;
           else if(s==".."){
               if(!st.empty())
                   st.pop();
           }
           else
               st.push(s);
       }
        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }
        if(res.size()==0)
            return "/";
        return res;
    }
};