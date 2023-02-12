#pragma once


class IVehicle {
public:
	virtual int getSpeed() const = 0;
	virtual  void printType() = 0;
	~IVehicle() {};
private:
};

