#include <iostream>
#include <string>
#include "dealership.h"

using namespace std;

int main() {

	Dealership veh[10];
	for (int i = 0; i < 10; i++) {
		veh[i].getVehicleModelData();
		veh[i].delivery();
		veh[i].showVehicleModelData();
		veh[i].selling();
		veh[i].showVehicleModelData();
	}

}
