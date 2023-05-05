class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>st={'a','e','i','o','u'};
        int c,mx=INT_MIN;
        int i=0,j=0,n=s.size(),l=0;
        for(int i=0;i<k;i++){
            if(st.find(s[i])!=st.end())
                c++;
        }
        mx=max(mx,c);
        
        j=k,i=0;
        while(i<n&&j<n){
            if(st.find(s[j])!=st.end())
                c++;
            if((j-i)>=k){
                if(st.find(s[i++])!=st.end())
                    c--;
            }
            j++;
            mx=max(mx,c);
        }
        return mx;
    }
};