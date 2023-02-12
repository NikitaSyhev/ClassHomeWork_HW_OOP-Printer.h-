#pragma once
#include <iostream>
#include "IVehicle.h"

class Bus:public IVehicle
{
public:
	Bus(int speed);
	int getSpeed() const override;
	void printType() override;
private:
	int _speed;
};

