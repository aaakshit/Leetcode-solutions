class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y)
                pq.push(x-y);
        }
        return pq.empty()?0:pq.top();
       //  for(int i=0;i<stones.size();i++){
       //      pq.push(stones[i]);
       //  }
       // // cout<<pq.size()<<endl;
       //  if(pq.size()==2){
       //      int x=pq.top();
       //      pq.pop();
       //      return x-pq.top();
       //  }
       //  while(pq.size()>2){
       //      int x=pq.top();
       //      pq.pop();
       //      pq.push(x-pq.top());
       //       cout<<pq.top()<<endl;
       //      pq.pop();
       //  }
       //  return pq.top();
    }
};