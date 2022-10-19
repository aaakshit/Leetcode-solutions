class Solution {
public:
    struct compar{
       bool operator() (pair<int, string>& a, pair<int, string>& b)
        {
            if(a.first == b.first) // if frequency are equal put lexicographically greater element on top
            {
                return a.second < b.second;
            }
            else              // if frequency are not equal put the elements on top which has less frequency
            {
                return a.first > b.first;
            }
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>, vector<pair<int,string>>,compar>pq;
        unordered_map<string,int>m;
        vector<string>v;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        // pq.push(words[i]);
        //     if(pq.size()>k)
        //         pq.pop();
        }
       for(auto x : m)
        {
            if(pq.size() < k)             // firstly push k elements into pq
            {
                pq.push({x.second, x.first});
            }
            else
            {
                if(pq.top().first < x.second || (pq.top().first == x.second && pq.top().second > x.first))
                {
                    pq.pop();
                    
                    pq.push({x.second, x.first});
                }
            }
        }
        while(!pq.empty()){
              v.push_back(pq.top().second);
              pq.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};