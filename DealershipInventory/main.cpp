#include <iostream>
#include <string>
#include "dealership.h"

using namespace std;

int main() {

	Dealership::printDealerInfo();

	string name;
	double modelAmount;
	string exchangeType;
	string delivering;
	string selling;
	int sellAmount;
	int deliverAmount;

	cout << "Choose from the following vehicle models: Impreza, Forrester, XV, Outback, WRX." << endl;
	getline(cin, name, '\n');
	cout << "Enter quantity: " << endl;
	cin >> modelAmount;

	Dealership vehicle_1;
	
	vehicle_1.setName(name);
	vehicle_1.setModelAmount(modelAmount);

	cout << "You entered: " << vehicle_1.getName() << endl << "Quantity: " << vehicle_1.getModelAmount() << endl;

	Dealership::printDealerInfo();
	
	do {
	cout << "Delivery or selling? Type \'delivering\' or \'selling\': " << endl;
	getline(cin, exchangeType, '\n');		
	} while (exchangeType != "delivering" && exchangeType != "selling");
	
	cout << "You entered: " << exchangeType << endl;	
	
	if (exchangeType == "selling") {
		cout << "How many " << vehicle_1.getName() << "s are being sold? " << endl;
		cin >> sellAmount;
		vehicle_1.sell(sellAmount);
	}
	else if (exchangeType == "delivering") {
		cout << "How many " << vehicle_1.getName() << "s are being delivered? " << endl;
		cin >> deliverAmount;
		vehicle_1.delivery(deliverAmount);
	}
	
	Dealership::printDealerInfo();

	/*Dealership Impreza;

	cout << endl << "30 Imprezas were delivered to the dealership.";
	Impreza.setName("Impreza");
	Impreza.setModelAmount(29);

	Dealership::printDealerInfo();

	Dealership Forrester;

	cout << endl << "25 Forresters were delivered to the dealership.";
	Forrester.setName("Forrester");
	Forrester.setModelAmount(24);

	Dealership::printDealerInfo();

	cout << endl;

	Dealership::printDealerInfo();

	cout << endl << "10 Imprezas were sold.";
	Impreza.sell(10);
	

	Dealership::printDealerInfo();*/

}
