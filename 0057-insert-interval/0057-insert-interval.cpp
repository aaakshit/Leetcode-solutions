class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& nw) {
      //   if(intervals.size()==0){
      //       intervals.push_back(nw);
      //       return intervals;
      //   }
      //   int i=0;
      //   for(;i<intervals.size();i++){
      //       if(intervals[i][1]>=nw[0])
      //           break;
      //   }
      //   intervals[i][0]=min(intervals[i][0],nw[0]);
      //    intervals[i][1]=max(intervals[i][1],nw[1]);
      //   int t=i;
      //   for(i=0;i<intervals.size();i++){
      //      if(intervals[t][1]>=intervals[i][0]){
      //          intervals[t][1]=max(intervals[t][1],intervals[i][1]);
      //      }
      //   }
      //  // if( intervals[i][0]<=nw[0])
      // //   intervals[t][1]=max(intervals[i][1],nw[1]);
         vector<vector<int>>ans;
      //   ans.push_back({intervals[0][0],intervals[0][1]});
      //   for(int j=1;j<intervals.size();j++){
      //       if(intervals[j][0]>intervals[j-1][1]){
      //           ans.push_back({intervals[j][0],intervals[j][1]});
      //       }
      //       else{
      //           intervals[j][0]=intervals[j-1][0];
      //           intervals[j][1]=intervals[j-1][1];
      //       }
      //   }
        int i=0;
        while(i<intervals.size() && intervals[i][1]<nw[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<intervals.size() && intervals[i][0]<=nw[1]){
            nw[0]=min(nw[0],intervals[i][0]);
            nw[1]=max(nw[1],intervals[i][1]);
            i++;
        }
        ans.push_back(nw);
        while(i<intervals.size()){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
    
};