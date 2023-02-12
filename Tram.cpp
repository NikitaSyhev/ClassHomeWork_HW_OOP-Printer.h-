#include "Tram.h"
#include <iostream>

Tram::Tram(int speed):_speed(speed){}

int Tram::getSpeed() const
{
	return _speed;
}

void Tram::printType()
{
	std::cout << "Tram " << std::endl;
}
