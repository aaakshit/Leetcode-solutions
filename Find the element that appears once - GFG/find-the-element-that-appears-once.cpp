//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int arr[], int n){
	    //code
	   int l=0,h=n-1,ans;
	   if(arr[0]!=arr[1])
	   return arr[0];
	   else if(arr[n-2]!=arr[n-1])
	   return arr[n-1];
	   else{
	   while(l<=h){
	       int mid=(l+h)/2;
	       if(arr[mid]!=arr[mid+1]&&arr[mid-1]!=arr[mid]){
	       ans=arr[mid];
	       break;
	       }
	       else if(mid%2==0 && arr[mid]==arr[mid+1])
	       l=mid+1;
	       else if(mid%2==1 && arr[mid]==arr[mid-1])
	       l=mid+1;
	       else if(mid%2==0 && arr[mid]==arr[mid-1])
	       h=mid-1;
	       else if(mid%2==1 && arr[mid]==arr[mid+1])
	       h=mid-1;
	   }
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