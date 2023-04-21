//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int>d(n);
        d=arr;
        sort(arr.begin(),arr.end());
        vector<long long>v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            v[i]=sum;
        }
        vector<long long>ans(n);
        vector<long long>res(n);
        ans[0]=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                ans[i]=v[i-1];
            }
            else{
                ans[i]=ans[i-1];
            }
        }
        unordered_map<long long,long long>m;
        for(int i=0;i<n;i++){
            m[arr[i]]=ans[i];
        }
        for(int i=0;i<n;i++){
            long long x=d[i];
            if(m.find(x)!=m.end()){
                res[i]=m[x];
            }
        }
       return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends