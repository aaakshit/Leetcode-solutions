//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> E)
  {
       int sum=INT_MIN;
   vector<int> v(N,0);
      for(int i=0;i<N;i++)
      {
          if( E[i]!=-1)
          {
          v[E[i]]+=i;
          }
      }
      int index=-1;
 for(int i=0;i<N;i++)
      {
         if(v[i]>=sum)
         {
             index=i;
             sum=v[i];
         }

      }

      return index;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends