#include "device.h"

Device::Device(const std::string& name, const std::string& id) : _name(name), _id(id) 
{}

void Device::reName(const std::string& name)
{
    _name = name;
}

void Device::printInfo() const
{
    std::cout << "Name: " << _name << " | ID: " << _id << std::endl;
}