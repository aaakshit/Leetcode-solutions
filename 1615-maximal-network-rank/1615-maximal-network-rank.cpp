class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
       vector<unordered_set<int>> graph(n);

       for(int i=0;i<roads.size();i++){
           int f,s;
           f=roads[i][0];
           s=roads[i][1];

           graph[f].insert(s);
           graph[s].insert(f);
       }  

       int ans=0;
       for(int i=0;i<n-1;i++){
           
           for(int j=i+1;j<n;j++){
               int value=0;
               int p=graph[i].size(),q=graph[j].size();
               if(graph[i].count(j)>0){ 
                   value++;
                   p--;
                   q--;
               }
               value+=p;
               value+=q;

               ans=max(ans,value);
           }
       }
       return ans;
    }
};