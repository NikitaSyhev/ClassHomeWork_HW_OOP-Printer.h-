//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "IVehicle.h"
#include "Bus.h"
#include"Car.h"
#include "Printer.h"
#include "Tram.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Car c(100);
	
	c.printType();

	Tram t(40);

	t.printType();

	Bus b(39);
	b.printType();

















	return 0;
}