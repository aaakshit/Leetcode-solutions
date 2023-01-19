//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int a, int b, int c, int d){
    //   int c1=0,c2=0,c3=0,c4=0;
    //   int x=a,y=b;
    //   while(x>c){
    //       c1++;
    //       x=x/2;
    //   }
    //   while(y>c){
    //       c2++;
    //       y=y/2;
    //   }
    //   x=a,y=b;
    //   while(x>d){
    //       c3++;
    //       x=x/2;
    //   }
    //   while(y>d){
    //       c4++;
    //       y=y/2;
    //   }
      
    //   return min(c1+c2,c3+c4);
    int count=0;
    while(max(a,b) > max(c,d))
    {
        if(b>a)
        {
            b/=2;
        }
        else
            a/=2;
        
        count++;
    }
    
    while(min(a,b) > min(c,d))
    {
        if(a<b)
        {
            a/=2;
        }
        else
            b/=2;
        count++;
        
    }
    
    return count;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends