#include <iostream>
#include <string>
#include "dealership.h"

using namespace std;

int main() {

	Dealership::printDealerInfo();

	Dealership Impreza;

	cout << endl << "30 Imprezas were delivered to the dealership.";
	Impreza.setName("Impreza");
	Impreza.setVehicleNumber(0001);
	Impreza.setModelAmount(29);

	cout << endl;

	Dealership::printDealerInfo();

	cout << endl << "12 Imprezas were sold.";
	Impreza.sell(12);
	

	Dealership::printDealerInfo();

}
