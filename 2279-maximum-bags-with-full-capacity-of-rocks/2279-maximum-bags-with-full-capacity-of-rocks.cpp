class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int a) {
       
        int n=rocks.size();
         vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=capacity[i]-rocks[i];
        }
        int c=0;
        int i=0;
        sort(ans.begin(),ans.end());
        int sum=0;
       for(i=0;i<n;i++){
          sum+=ans[i];
           if(sum>a)
               break;
       }
        c+=i;
        cout<<c<<endl;
        //c+=count(ans.begin()+i-1,ans.end(),0);
        return c;
    }
};