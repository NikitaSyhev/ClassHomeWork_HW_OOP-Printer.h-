#include "Printer.h"

void Printer::getType(const  std::shared_ptr<IVehicle> &_ptr) 
{
	_vec.push_back(_ptr);
}
