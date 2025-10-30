#pragma once
#include <iostream>
struct Car
{
    Car( const std::string&, const std::string& );

    const std::string regNumber;
    const std::string arrivalTime;
    void print() const;
};