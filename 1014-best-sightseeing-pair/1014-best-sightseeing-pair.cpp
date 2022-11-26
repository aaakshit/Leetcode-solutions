class Solution {
public:
    int dp[1005][1005];
    int solve(int i,int j,int n,vector<int>& values,vector<int>& v){
        if(i>=n || j>=n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int a=(values[i]+v[j]+(i-j))+solve(i+1,j+1,n,values,v);
        int b=(values[i]+v[j]+(i-j))+solve(i,j+1,n,values,v);
        int c=(values[i]+v[j]+(i-j))+solve(i+1,j,n,values,v);
        return dp[i][j]=max(a,max(b,c));
       // int a=(values[i]+v[j]+(i-j))+solve(i+1,j+1,n,values,v);
    }
    int maxScoreSightseeingPair(vector<int>& values) {
        // vector<int>v;
        // v=values;
        // memset(dp,-1,sizeof(dp));
        // return solve(0,0,values.size(),values,v);
        int lsum=values[0];
        int sum=0;
        int mx=INT_MIN;
        for(int i=1;i<values.size();i++){
            sum=lsum+values[i]-i;
            mx=max(mx,sum);
            lsum=max(lsum,values[i]+i);
        }
        return mx;
        
    }
};