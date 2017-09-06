#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <iostream>
#include <string>

using namespace std;

class Dealership {

public:
	Dealership();

	Dealership(string, int, double);

	~Dealership();

	string getName() const;

	int getVehicleNumber() const;

	double getModelAmount() const;

	void setName(string);
	
	void setVehicleNumber(int);

	void setModelAmount(double);

	void sell(double);
	
	void delivery(double);

	static void printDealerInfo();

private:

	string name;
	int vehicleNumber;
	double modelAmount;

	static int totalVehicles;
	

};



#endif 
