// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        if(!binary_search(v.begin(),v.end(),x))
        return {-1,-1};
        
        // int left=0,right=v.size()-1;
        // int mid,ans;
        // while(left<=right)
        // {
        //     mid=left+(right-left)/2;
            
        //     if(v[mid] < x)
        //     {
        //         left=mid+1;
        //     }
        //     else
        //     {
        //         if(mid==0 || v[mid-1] < x)
        //         {
        //             ans=mid;
        //         }
        //         right=mid-1;
        //     }
        // }
        
      int l=0,h=v.size()-1;
      int ans=-1;
      while(l<=h){
          int mid=l+(h-l)/2;
          if(v[mid]==x){
              ans=mid;
            //  l=mid+1;
            h=mid-1;  
          }else if(v[mid]<x){
              l=mid+1;
          }else
          
          h=mid-1;
         // else
       //   l=mid+1;
         
         
      }
      int fs=ans;
     // cout<<fs<<endl;
    //  l=0,h=v.size()-1;
    //   while(l<=h){
    //       int mid=l+(h-l)/2;
    //       if(v[mid]>=x)
    //       l=mid+1;
    //       else
    //       h=mid-1;
    //   }
      int ss=upper_bound(v.begin(),v.end(),x)-v.begin();
    //   if(v[fs]!=x)
    //   return {-1,-1};
      
      return {fs,ss-1};
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends