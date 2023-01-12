class Solution {
public:
   vector<int> canSeePersonsCount(vector<int>& h) {
         int n=h.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--)  {
            int cnt=0;
                while(!st.empty() && st.top()<h[i])   {
                    st.pop();
                    cnt++;
                }
            ans[i]=st.empty()?cnt:cnt+1;
            st.push(h[i]);
        }
        return ans;
    }
};