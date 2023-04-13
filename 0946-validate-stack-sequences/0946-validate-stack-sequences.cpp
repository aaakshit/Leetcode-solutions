class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j=0,n=popped.size();
        for(int i=0;i<n;i++){
            st.push(pushed[i]);
            if(!st.empty()&&j<n&&popped[j]==st.top()){
                while(!st.empty()&&j<n &&popped[j]==st.top()){
                    st.pop();
                    j++;
                }
            }
            
        }
        // while(!st.empty()){
        //     cout<<st.top()<<" ";
        //     st.pop();
        // }
        if(st.empty())
            return 1;
        return 0;
    }
};