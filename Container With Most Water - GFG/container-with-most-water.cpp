//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int mx=INT_MIN;
    int i=0,j=len-1,sum=0;
    while(i<len){
        sum=(j-i)*min(A[i],A[j]);
        mx=max(mx,sum);
        if(A[i]<A[j])
        i++;
        else
        j--;
    }
    // i=0,j=len-1;
    // sum=0;
    // while(j>=0){
    //     sum=(j-i)*min(A[i],A[j]);
    //     mx=max(mx,sum);
    //     j--;
    // }
    return mx;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends