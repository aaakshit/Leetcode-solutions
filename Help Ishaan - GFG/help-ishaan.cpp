//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int check(int n){
	     for(int i=2;i*i<=n;i++){
	         if(n%i==0)return 0;
	 }
	 return 1;
	}
		int NthTerm(int n){
		    // Code here
		   if(n==1)return 1;
		   int i=n,j=n,c=0,f=0;
		   while(true){
		       if(check(i)||check(j))
		       return c;
		   
		   c++;i--;j++;
		   if(i==0){
		       f=1;
		       break;
		   }
		}
		if(f){
		    while(check(j)){
		        return c;
		    }
		    j++;c++;
		}
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends