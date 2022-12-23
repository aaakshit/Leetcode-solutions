class Solution {
public:
    int mySqrt(int x) {
        long long i=1;
        while(1){
            if(i*i==x){
                return i;
            }
            if(i*i>x)
                return i-1;
            i++;
        }
        return i;
    }
};