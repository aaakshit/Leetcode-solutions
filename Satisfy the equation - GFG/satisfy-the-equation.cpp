//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int a[], int n) {
        // code here
        unordered_map<int,set<pair<int,int>>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j)
                m[a[i]+a[j]].insert({i,j});
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=a[i]+a[j];
                if(m.find(temp)!=m.end()){
                    for(auto x:m[temp]){
                        if(x.first==i||x.first==j)
                        continue;
                        if(x.second==i||x.second==j)
                        continue;
                        return {i,j,x.first,x.second};
                    }
                }
            }
        }
        return {-1,-1,-1,-1};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends