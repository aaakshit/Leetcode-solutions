class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
         st.insert('u');
         st.insert('A');
         st.insert('E');
         st.insert('I');
         st.insert('O');
         st.insert('U');
        int c1=0,c2=0;
        for(int i=0;i<s.size()/2;i++){
            if(st.find(s[i])!=st.end())
                c1++;
        }
         for(int i=s.size()/2;i<s.size();i++){
            if(st.find(s[i])!=st.end())
                c2++;
        }
        if(c1==c2)
            return 1;
        return 0;
        
    }
};