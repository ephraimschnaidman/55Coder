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

string Dealership::exchangeTypeLoop(string exchangeType) {
	int t;
	t = 5;
	while (exchangeType != "delivering" && exchangeType != "selling" && t > -1) {
		cout << "Delivery or selling? Type \'delivering\' or \'selling\': " << endl;
		cin >> exchangeType;
		if (exchangeType == "delivering") {
			break;
		}
		else if (exchangeType == "selling") {
			break;
		}
		else if (t > 1) {
			cout << "Invalid entry. Please try again.\n";
			cout << "You have " << t << " more attempts left.\n";
			t--;
		}
		else if (t == 1) {
			cout << "Invalid entry. Please try again.\n";
			cout << "You have " << t << " more attempt left.\n";
			t--;
		}
		else {
			cout << "Invalid entry. Exiting program.\n";
			EXIT_FAILURE;
		}
	} cout << "You entered " << exchangeType;
	return exchangeType;
}

void Dealership::printDealerInfo() {
	cout << endl << " Total Number of Vehicles in dealership: " << totalVehicles << endl;
	cout << endl;
}
