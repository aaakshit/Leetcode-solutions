class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0;
        int c=0;
        while(i<costs.size() && coins>0){
            if(costs[i]<=coins)
            c++;
            coins-=costs[i];
            i++;
        }
        return c;
    }
};