class Solution {
public:
    int bulbSwitch(int n) {
       long long i=1;
        int c=0;
        while((i*i)<=n){
            i++;
            c++;
        }
        return c;
    }
};
//1 0 0 1 0 0 0 0 1 0