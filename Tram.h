#pragma once
#include "IVehicle.h"
class Tram:public IVehicle
{
public:
	Tram(int speed);
	int getSpeed() const override;
	void printType() override;
private:
	int _speed;

};

