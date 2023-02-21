//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string d[], int n, int k) {
        //code here
        vector<int>adj[k];
        for(int i=0;i<n-1;i++){
            string s1=d[i];
            string s2=d[i+1];
            int j=0;
            while(s1[j] && s2[j]){
                if(s1[j]!=s2[j]){
                    // cout<<s1[j]<<" "<<s2[j]<<endl;
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
                j++;
            }
        }
        vector<int>deg(k,0);
        for(int i=0;i<k;i++){
            for(auto x:adj[i]){
                // cout<<x<<endl;
                deg[x]++;
            }
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
            // cout<<deg[i]<<endl;
            if(deg[i]==0)
            q.push(i);
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            // cout<<x<<endl;
            ans.push_back(x);
            for(auto i:adj[x]){
                deg[i]--;
                if(deg[i]==0)
                q.push(i);
            }
        }
        string s="";
        for(auto x:ans){
            // cout<<x<<endl;
            s+=char(x+'a');
        }
        
        return s;
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends