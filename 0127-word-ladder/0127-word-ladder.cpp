class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        set<string>st;
        unordered_map<string,bool>m;
        for(int i=0;i<w.size();i++){
            st.insert(w[i]);
        }
        st.erase(b);
        queue<pair<string,int>>q;
        q.push({b,1});
        while(!q.empty()){
            string t=q.front().first;
            int d=q.front().second;
            q.pop();
            if(t==e)
                return d;
            for(int i=0;i<t.size();i++){
                string tt=t;
                for(int j=0;j<26;j++){
                    char ch=j+'a';
                    t[i]=ch;
                    if(st.find(t)!=st.end() && !m[t]){
                        m[t]=1;
                        q.push({t,d+1});
                    }
                }
                t=tt;
            }
        }
        return 0;
    }
};