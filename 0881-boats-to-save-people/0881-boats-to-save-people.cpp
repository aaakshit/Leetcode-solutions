class Solution {
public:
    // bool check(int mid,vector<int>&p,int l){
    //     int ans=0;
    //     int sum=0;
    //     for(int i=0;i<p.size();i++){
    //         ans+=p[i];
    //         if(ans>l){
    //             sum++;
    //             ans=0;
    //             i--;
    //         }
    //     }
    //     return sum<mid;
    // }
    int numRescueBoats(vector<int>& people, int limit) {
         sort(people.begin(),people.end());
        int b=0;
        int i=0,j,n=people.size();
        j=n-1;int c=0;
        while(i<=j){
           if(people[i]+people[j]<=limit)
           {
              // c++;
               i++;
               j--;
           }
            else
                j--;
            c++;
        }
        return c;
    }
};