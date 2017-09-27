#ifndef DEALERSHIP_H
#define DEALERSHIP_H
#define _GLIBCXX_USE_CXX11_ABI 1

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Dealership {

public:
	Dealership();

	Dealership(string, double);

	~Dealership();

	string getName() const;

	double getModelAmount() const;

	string getExchangeType() const;

	void setName(string);

	void setModelAmount(double);
	
	void setExchangeType(string);

	void sell(double);
	
	void delivery(double);

	static void printDealerInfo();

private:

	string newName;
	double newModelAmount;
	string newExchangeType;

	static int totalVehicles;
	

};

#endif 
