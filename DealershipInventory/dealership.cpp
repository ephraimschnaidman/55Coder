#include "dealership.h"
#include "vehicleDetails.h"

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::string;

Dealership::Dealership() {
	totalVehcleAmount = 0;
}

Dealership::~Dealership() {
	totalVehcleAmount--;
}

void Dealership::delivery(int d, int vehicleModelAmount) {	
	vehicleModelAmount += d;	
}

void Dealership::selling(int s, int vehicleModelAmount) {
	vehicleModelAmount -= s;
}

void inventoryDisplayChart(int vehicleID, string vehicleMakeName, string vehicleModelName, char vehicleModelYear[4]) {
	cout<<vehicleID<<setw(10)<<" "<<vehicleMakeName<<setw(8)<<" "<<vehicleModelName<<setw(8)<<vehicleModelYear<<setw(8)<<endl;
}

void Dealership::printDealerInfo() {
	Dealership vehicle_1;
	cout<<"\n\n\t\tDealership Inventory\n\n";
	cout<<"==============================================================\n";
	cout<<"VID no.      Make           Model  	Year		Total\n";
	cout<<"==============================================================\n";
	vehicle_1.inventoryDisplayChart();
	cout<<"==============================================================\n";
	cout << endl << " Total Number of Vehicles in dealership: " << totalVehcleAmount << endl;
	cout << endl;
}
