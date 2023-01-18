class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        int c=0;int x=0;
        vector<int>v(t.size());
       // st.push(0);
        for(int i=0;i<t.size();i++){
           if(st.empty())
               st.push(i);
            else 
            {
                if(t[i]<=t[st.top()]){
                    st.push(i);
                }
                else{
                    while(!st.empty()&&t[i]>t[st.top()]){
                        x=st.top();
                        st.pop();
                        v[x]=i-x;
                    }
                    st.push(i);
                }
            }
            
        }
        return v;
    }
    
};