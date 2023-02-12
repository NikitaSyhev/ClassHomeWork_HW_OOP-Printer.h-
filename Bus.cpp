#include "Bus.h"

Bus::Bus(int speed):_speed(speed){}

int Bus::getSpeed() const
{
    return _speed;
}

void Bus::printType()
{
    std::cout << "Bus" << std::endl;
}
