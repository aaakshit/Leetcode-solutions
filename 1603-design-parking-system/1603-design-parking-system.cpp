class ParkingSystem {
public:
    int one=1,two=1,three=1,b,m,s;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int c) {
        if(c==1){
            if(one<=b){
                one++;
                return 1;
            }
            else
                return 0;
        }
        if(c==2){
            if(two<=m){
                two++;
                return 1;
            }
            else
                return 0;
        }
        if(c==3){
            if(three<=s){
                three++;
                return 1;
            }
            else
                return 0;
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */