class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profit, vector<int>& capital) {
        // priority_queue<pair<int,int>>pq;
        vector<pair<int,int>>v;
        for(int i=0;i<profit.size();i++){
            v.push_back({capital[i],profit[i]});
        }
        sort(v.begin(),v.end());
        priority_queue<int> pq;
        int i = 0;
        while (k--)
        {
            while (i < profit.size() && v[i].first <= w)
            {
                pq.push(v[i++].second);
            }
            if (pq.empty())
                break;
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};