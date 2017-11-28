#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip> // io manipulator
#include "vehicleDetails.h"

class Dealership {

private:
	double totalVehcleAmount;

public:
	Dealership();

	~Dealership();	 
	
	void delivery(int d, int vehicleModelAmount);

	void selling(int s, int vehicleModelAmount);

	void inventoryDisplayChart();	//function to show data in tabular format

	void printDealerInfo();
};

#endif 
