#include "Car.h"

Car::Car(int speed):_speed(speed){}

int Car::getSpeed() const
{
	return _speed;
}

void Car::printType()
{
	std::cout << "Car" << std::endl;
}
