//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
  //Your code here 
 string ans = "";
   int i= 0;
   while(i<s.size()){
         int count = 0;
       char c = s[i];
       while(s[i]==c){
           i++;
           count++;
       }
       ans += c;
       ans += to_string(count);
   }

   return ans;
}     
 
