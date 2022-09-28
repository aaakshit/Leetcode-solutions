class Solution {
public:
    string reorganizeString(string s) {
        string ans="";
        unordered_map<char,int>m(26);
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x:m){
            pq.push(make_pair(x.second,x.first));
        }
        while(pq.size()>1){
            auto a=pq.top();
            pq.pop();
            auto b=pq.top();
            pq.pop();
            ans+=a.second;
            ans+=b.second;
            a.first--;
            b.first--;
            if(a.first>0)
                pq.push(a);
            if(b.first>0)
                pq.push(b);
        }
        if(!pq.empty()){
            if(pq.top().first>1)
                return "";
            else
             ans+=pq.top().second;
        }
        
        return ans;
    }
};