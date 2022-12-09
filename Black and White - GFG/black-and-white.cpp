//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
    long long n=N;
    long long m=M;
    int mod=1000000007;
    if(n<=2 && m<=2)
      return (n*m)*((n*m)-1);
    else if(n<2 || m<2)
    return (n*m)*((n*m)-1);
    else {
        int r=((n-1)*(m-2));
        int c=((n-2)*(m-1));
       long long  x=n*m;
        long long  y=m*n-1;
        
        int attack=(4*(r+c))%mod;
        
       long long placed=(x*y)%mod;
    
        return (placed-attack)%mod;
    }
}