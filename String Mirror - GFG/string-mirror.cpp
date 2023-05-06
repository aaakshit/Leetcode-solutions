//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        int i=0,j=0,n=str.size();
        string ans=" ",s1="";
        while(i<n-1 && j<n-1){
            if(str[j]<str[j+1] ||(str[j]==str[j+1] && j==0) ){
                break;
            }
            j++;
        }
        ans=str.substr(0,j+1);
        s1=ans;
        reverse(ans.begin(),ans.end());
        s1+=ans;
        return s1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends