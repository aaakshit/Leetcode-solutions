class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)return 0;
        if(floor(log2(n))==ceil(log2(n)))
            return true;
        else
            return false;
    }
};