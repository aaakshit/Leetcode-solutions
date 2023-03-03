class Solution {
public:
    int strStr(string h, string n) {
        
            if(h.find(n)<h.size())
                return h.find(n);
           
        return -1;
    }
};