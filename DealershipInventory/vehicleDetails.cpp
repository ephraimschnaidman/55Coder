#include "vehicleDetails.h"

using std::cout;
using std::cin;
using std::endl;

VehicleData::VehicleData() {
	vehicleModelAmount = 0;
}

VehicleData::~VehicleData() {
	vehicleModelAmount--;
}

int VehicleData::displayVehicleModelAmount() {
	return vehicleModelAmount;
}

int VehicleData::returnVehicleID() const {
	return vehicleID;
}

void VehicleData::getVehicleModelData() {
	cout << "Enter make of vehicle: " << endl;
	cin >> vehicleMakeName;
	cout << "Enter name of vehicle: " << endl;
	cin >> vehicleModelName;
	cout << "Enter the model year: " << endl;
	cin >> vehicleModelYear;
	cout << "Enter the vehicle ID: "	<< endl;
	cin >> vehicleID;
}

void VehicleData::showVehicleModelData() {
	cout << "Vehicle ID number: " << vehicleID << '\n';
	cout << "Make: " << vehicleMakeName << '\n';
	cout << "Model: " << vehicleModelName << '\n';
	cout << "Model Year: " << vehicleModelYear << '\n';
	cout << "Total " << vehicleModelAmount << '\n';
}

void VehicleData::modifyVehicleData() {
	cout << "Enter vehicle ID number: " << vehicleID;
	cout << "Enter vehicle make: ";
	cin.ignore();
	cin.getline(vehicleMakeName, 30);
	cout << "Enter vehicle model: ";
	cin.ignore();
	cin.getline(vehicleModelName, 30);
	cout << "Enter vehicle model year: ";
	cin.ignore();
	cin.getline(vehicleModelYear, 4);
}
