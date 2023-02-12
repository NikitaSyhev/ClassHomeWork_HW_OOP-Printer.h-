#pragma once
#include <vector>
#include <iostream>
#include"IVehicle.h"
class Printer
{
public:
	void getType( const std::shared_ptr<IVehicle> &_ptr);
	
private:
	std::vector<std::shared_ptr<IVehicle>> _vec;
};

