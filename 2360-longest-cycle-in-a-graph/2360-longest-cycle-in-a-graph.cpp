class Solution {
public:
    int check(int i,vector<int>&vis,vector<vector<int>>&v,set<int>&st){
        vis[i]=1;
        st.insert(i);
        for(auto x:v[i]){
            if(st.find(x)!=st.end()){
                return x;
            }
            if(!vis[x]){
                int j=check(x,vis,v,st);
                if(j!=-1)
                    return j;
            }
        }
        st.erase(i);
        return -1;
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            if(edges[i]!=-1){
                v[edges[i]].push_back(i);
            }
        }
        vector<int>vis(n,0);
        int ans=-1;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                set<int>st;
                int x=check(i,vis,v,st);
                if(x>-1){
                    int c=1;
                    int t=i;
                    while(edges[t]!=i){
                        t=edges[t];
                        c++;
                    }
                    ans=max(ans,c);
                }
            }
        }
        return ans;
            
    }
};