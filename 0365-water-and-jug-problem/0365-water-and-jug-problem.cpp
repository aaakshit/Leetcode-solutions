class Solution {
public:
    bool canMeasureWater(int j1, int j2, int tj) {

        if ( j1+j2 < tj ) return false;

        return tj%std::gcd(j1,j2) == 0;
        
    }
};