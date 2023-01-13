class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,float>>v;
        for(int i=0;i<position.size();i++){
             float t1=(float)(target-position[i])/speed[i];
            v.push_back({position[i],t1});
        }
        sort(v.rbegin(),v.rend());
        int c=1;
       for(int i=0;i<position.size()-1;i++){
           if(v[i].second<v[i+1].second)
               c++;
           else
               v[i+1].second=v[i].second;
           
       }
        return c;
    }
};