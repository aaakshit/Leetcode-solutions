//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
void rev(int a[],int l, int h){
	    while(l<h){
	        swap(a[l],a[h]);
	        l++;h--;
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k%=n;
	   rev(arr,0,k-1);
	   rev(arr,k,n-1);
	   rev(arr,0,n-1);
	
	}
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends