class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++)
            pq.push(piles[i]);
         // for(int i=0;i<piles.size();i++){
         //    cout<<pq.top()<<" ";
         //     pq.pop();
         // }
        
        while(!pq.empty()&&k>0){
          int n = pq.top();
            pq.pop();
            n=n-n/2;
            pq.push(n); 
            k--;
        }
        int sum=0;
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};