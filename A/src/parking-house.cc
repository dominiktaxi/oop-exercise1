#include "parking-house.h"
#include <utility>

void ParkingHouse::addCar( const Car& car )
{
    _cars.push_back( car );
}

bool ParkingHouse::removeCar( const std::string& regNumber )
{
    for ( int i = 0; i < _cars.size(); i++ )
    {
        if( _cars[i].regNumber == regNumber )
        {
            _cars.erase( _cars.begin() + i );
            _cars.pop_back();
            return true;
            break;
        }
    }
    return false;
}

void ParkingHouse::printStatus() const
{
    for( const auto& car : _cars )
    {   
         std::cout << "Parked car: " << car.regNumber << " arrived at " << car.arrivalTime << std::endl;
    }
}