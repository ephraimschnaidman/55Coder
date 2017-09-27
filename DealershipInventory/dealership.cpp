#include "dealership.h"

using std::cout;
using std::cin;
using std::endl;

Dealership::Dealership() {
	vehicleModelAmount = 0;
	totalVehcleAmount = 0;
}

Dealership::~Dealership() {
	vehicleModelAmount--;
	totalVehcleAmount--;
}

void Dealership::getVehicleModelData() {
	cout << "Choose from the following vehicle models: Impreza, Forrester, Crosstrek, Legacy, Outback, WRX, or BRZ." << endl;
	cin >> vehicleModelName;
	cout << "Enter the model year: " << endl;
	cin >> vehicleModelYear;	
}

void Dealership::delivery() {	
	double del;
	cout << "How many " << vehicleModelName << "s are being delivered?\n";
	cin >> del;
	vehicleModelAmount += del;	
}

void Dealership::selling() {
	double sell;
	cout << "How many " << vehicleModelName << "s are being sold?\n";
	cin >> sell;
	vehicleModelAmount -= sell;
}

void Dealership::showVehicleModelData() {
	cout << "Vehicle: " << vehicleModelName << '\n';
	cout << "Model Year: " << vehicleModelYear << '\n';
	cout << "Total " << vehicleModelAmount << '\n';
}

void Dealership::printDealerInfo() {
	cout << endl << " Total Number of Vehicles in dealership: " << totalVehcleAmount << endl;
	cout << endl;
}


/*void Dealership::setExchangeType(string exchangeType) {
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
	}
	newExchangeType = exchangeType; 
	cout << endl;	
}*/
