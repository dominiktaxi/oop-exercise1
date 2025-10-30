#pragma once
#include "car.h"
#include <vector>
class ParkingHouse
{
    public:
    void addCar ( const Car& );
    bool removeCar( const std::string& );
    void printStatus() const;
    private:
    std::vector<Car> _cars;
};