//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int arr[], int n){
	    //code
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++){
	        m[arr[i]]++;
	    }
	    int ans;
	    for(auto x:m){
	        if(x.second==1)
	        ans=x.first;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends