#include "dealership.h"

int Dealership::totalVehicles = 0;

Dealership::Dealership() {
	newModelAmount = 0;
	totalVehicles++;
}

Dealership::Dealership(string name, double modelAmount) {
	newName = name;
	newModelAmount = modelAmount;
	totalVehicles++;
}

Dealership::~Dealership() {
	totalVehicles--;
}

string Dealership::getName() const {
	return newName;
}

double Dealership::getModelAmount() const {
	return newModelAmount;
}

void Dealership::setName(string name) {
	newName = name;
}

void Dealership::setModelAmount(double modelAmount) {
	totalVehicles -= newModelAmount;
	newModelAmount = modelAmount;
	totalVehicles += newModelAmount;
}

void Dealership::sell(double sell) {
	newModelAmount -= sell;
	totalVehicles -= sell;
}

void Dealership::delivery(double delivery) {
	newModelAmount += delivery;
	totalVehicles += delivery;
}

void Dealership::printDealerInfo() {
	cout << endl << " Total Number of Vehicles in dealership: " << totalVehicles << endl;
	cout << endl;
}
