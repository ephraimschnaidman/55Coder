#ifndef VEHICLEDETAILS_H
#define VEHICLEDETAILS_H

#include <iostream>
#include <string>
#include <stdlib.h>

class VehicleData {

private:

	char vehicleMakeName[30];

	char vehicleModelName[30];

	char vehicleModelYear[4];

	int vehicleModelAmount;
	
	int vehicleID;

public:

	VehicleData();

	~VehicleData();

	int displayVehicleModelAmount();

	int returnVehicleID() const;

	void getVehicleModelData();

	void showVehicleModelData();

	void modifyVehicleData();

};

#endif
