class Solution {
public: 
    string Say(int n, string prevs = "1") {
    if(n==1) return prevs;
    int i=0, j, len = prevs.size();
    string currs = "";
    while(i<len) {
        j=i;
        while(i<len && prevs[i]==prevs[j]) i++;
        currs += to_string(i-j) + prevs[j];
    }
    return Say(n-1, currs);
}
    string countAndSay(int n) {
        string prevs="1";
        return Say(n,prevs);
    }
};