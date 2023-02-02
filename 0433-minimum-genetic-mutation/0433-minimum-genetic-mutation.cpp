class Solution {
public:
    int minMutation(string s, string e, vector<string>& bank) {
        vector<char>ch={'A','C','G','T'};
        unordered_map<string,bool>m;
        set<string>st;
        for(int i=0;i<bank.size();i++){
            st.insert(bank[i]);
        }
        queue<pair<string,int>>q;
        q.push({s,0});
        while(!q.empty()){
            string ans=q.front().first;
            int c=q.front().second;
            if(ans==e)
                return c;
            q.pop();
            for(int i=0;i<8;i++){
                string t=ans;
                // if(ans[i]!=e[i]){
                    for(int j=0;j<4;j++){
                        ans[i]=ch[j];
                       if(st.find(ans)!=st.end() && !m[ans]){
                           m[ans]=1;
                           q.push({ans,c+1});
                       }
                    // }
                }
                ans=t;
            }
        }
        return -1;
    }
};