//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  #define ll long long
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	priority_queue<ll,vector<ll>,greater<ll>>pq1;
    	priority_queue<ll>pq2;
    	for(int i=0;i<n;i++){
    	    pq1.push(arr[i]);
    	    pq2.push(arr[i]);
    	   // if(pq1.size()>3){
    	   //     pq1.pop();
    	   // }
    	   // if(pq2.size()>3){
    	   //     pq2.pop();
    	   // }
    	}
    	ll a=1,b=1,mx=INT_MIN;
    	ll x=pq1.top();
    	pq1.pop();
    	ll y=pq1.top();
    	pq1.pop();
    	ll l=pq2.top();
    	pq2.pop();
    	ll m=pq2.top();
    	pq2.pop();
    	ll s=pq2.top();
    	pq2.pop();
    	a=x*y*l;
    	b=l*m*s;
    	mx=max(a,b);
    	return mx;
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends