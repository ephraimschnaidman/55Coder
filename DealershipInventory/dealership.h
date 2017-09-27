#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <iostream>
#include <string>
#include <stdlib.h>

class Dealership {

private:

	char vehicleModelName[30];
	char vehicleModelYear[4];
	double vehicleModelAmount;
	double totalVehcleAmount;

public:
	Dealership();

	~Dealership();

	void getVehicleModelData();
	
	void delivery();

	void selling();

	void showVehicleModelData();

	void printDealerInfo();
};

#endif 
