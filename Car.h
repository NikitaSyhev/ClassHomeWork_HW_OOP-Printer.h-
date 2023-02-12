#pragma once
#include <iostream>
#include "IVehicle.h"

class Car :public IVehicle{
public:
	Car(int speed);
	int getSpeed() const override;
	void printType() override;
private:
	int _speed;
};

