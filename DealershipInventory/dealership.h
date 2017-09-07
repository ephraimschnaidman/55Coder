#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <iostream>
#include <string>

using namespace std;

class Dealership {

public:
	Dealership();

	Dealership(string, double);

	~Dealership();

	string getName() const;

	double getModelAmount() const;

	void setName(string);

	void setModelAmount(double);

	void sell(double);
	
	void delivery(double);

	static void printDealerInfo();

private:

	string newName;
	double newModelAmount;

	static int totalVehicles;
	

};



#endif 
