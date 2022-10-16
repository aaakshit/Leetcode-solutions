//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
        unordered_map<char,int>m;
        string ans;
        // for(int i=0;i<w.size();i++){
        //     if(w[i]>=97 && w[i]<=122)
        //      m[w[i]]+=w[i]-97;
        //      else
        //      m[w[i]]+=w[i]-65;
        // }
        for(int i=0;i<n;i++){
           
                m[x[i]]=b[i];
            
        }
        int sum=0,mx=INT_MIN,j=0;
        for(int i=0;i<w.size();i++){
            if(m.count(w[i]))
            sum+=m[w[i]];
            else
            sum+=w[i];
            if(sum>mx){
                ans=w.substr(j,i-j+1);
                mx=sum;
            }
            if(sum<0)
            sum=0,j=i+1;
        }
        return ans;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends