//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends

int solve(int i, int j, int m , int n , int &c){
     if(i==m-1 && j==n-1){
         c++;
         return 1;
     }
     if(i>=m || j>=n)
     return 0 ;
     return c=solve(i+1,j,m,n,c)+solve(i,j+1,m,n,c);
 }
 long long  numberOfPaths(int m, int n)
{
    // Code Here
    int c=0;
    solve(0,0,m,n,c);
    return c;
    
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends