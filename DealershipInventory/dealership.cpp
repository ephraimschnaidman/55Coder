#include "dealership.h"

int Dealership::totalVehicles = 0;

Dealership::Dealership() {
	vehicleNumber = 0;
	modelAmount = 0;
	totalVehicles++;
}

Dealership::Dealership(string newName, int newVehicleNumber, double newModelAmount) {
	name = newName;
	vehicleNumber = newVehicleNumber;
	modelAmount = newModelAmount;
	totalVehicles++;
}

Dealership::~Dealership() {
	totalVehicles--;
}

string Dealership::getName() const {
	return name;
}

int Dealership::getVehicleNumber() const {
	return vehicleNumber;
}

double Dealership::getModelAmount() const {
	return modelAmount;
}

void Dealership::setName(string newName) {
	name = newName;
}

void Dealership::setVehicleNumber(int newVehicleNumber) {
	vehicleNumber = newVehicleNumber;
}

void Dealership::setModelAmount(double newModelAmount) {
	totalVehicles -= modelAmount;
	modelAmount = newModelAmount;
	totalVehicles += modelAmount;
}

void Dealership::sell(double sell) {
	modelAmount -= sell;
	totalVehicles -= sell;
}

void Dealership::delivery(double delivery) {
	modelAmount += delivery;
	totalVehicles += delivery;
}

void Dealership::printDealerInfo() {
	cout << endl << " Total Number of Vehicles in dealership: " << totalVehicles << endl;
}
