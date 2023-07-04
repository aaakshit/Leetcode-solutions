//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        // long long int p=1,i=0,j=0,sum=0;
        // while(i<n && j<n){
        //     while(p>=k && j<n){
        //         p/=a[j++];
        //     }
        //     p*=a[i];
        //     if(p<k)
        //     sum+=(i-j+1);
        //     i++;
            
        // }
        // i--;
        // while(j<n && p>=k)
        // p/=a[j++];
        // if(p<k)
        // sum+=(i-j+1);
        // return sum;
        
        long long ans = 1;
        int j = 0;
        long long sum = 0;
        bool first = true;
        if(k == 1) return 0;
        bool ok = false;
        for(int i = 0; i < n ; i ++ ) {
            ans *= a[i];
            if(first and ans < k){
                continue;
            }
            if(first and ans >= k) {
                first = false;
                sum += (i*(i+1))/2;
            }
            while(j <= i and ans >= k) {
                ans /= a[j];
                j++;
            }
            
            sum += ((1ll*(i - j+1)*1ll*(i-j+2))/2);
            sum -= (1ll*(i-j)*1ll*(i-j+1))/2;
        }
        if(first){
            sum = (n*(n+1))/2;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends