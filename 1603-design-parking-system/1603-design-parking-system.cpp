class ParkingSystem {
public:
    vector<int> Lots;
    ParkingSystem(int big, int medium, int small) {
        Lots.push_back(big);
        Lots.push_back(medium);
        Lots.push_back(small);
    }
    
    bool addCar(int carType) {
        if(Lots[carType-1]){Lots[carType-1]--;return true;}
        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */