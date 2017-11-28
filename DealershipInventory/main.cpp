#include <iostream>
#include <string>
#include <cstdlib>
#include "dealership.h"
#include "vehicleDetails.h"

using namespace std;

int main() {

	cout << "Hello world!" << endl;
	

char ch;
	int IDnum;
	do
	{
		cout << "\n\n\tMAIN MENU";
		cout << "\n\n\t01. New Vehicle";
		cout << "\n\n\t02. Display Dealership Inventory";
		cout << "\n\n\t03. Display Vehicle data";
		cout << "\n\n\t04. Modify Vehicle info";
		cout << "\n\n\t05. Vehicle Delivery";
		cout << "\n\n\t06. Vehicles Sold";
		cout << "\n\n\t07. EXIT";
		cout << "\n\n\tSelect Your Option (1-7) ";
		cin >> ch;
		switch(ch)
		{
		case '1':
			getVehicleModelData();
			break;
		case '2':
			printDealerInfo();
			break;
		case '3':
			cout<<"\n\n\tEnter the vehicle ID : "; cin>>IDnum;
			showVehicleModelData(IDnum);
			break;
		case '4': 
			cout<<"\n\n\tEnter the vehicle ID : "; cin>>IDnum;
			modifyVehicleData(IDnum);
			break;
		case '5':
			cout<<"\n\n\tEnter the vehicle ID : "; cin>>IDnum;
			delivery(IDnum);
			break;
		case '6':
			cout<<"\n\n\tEnter the vehicle ID : "; cin>>IDnum;
			selling(IDnum);
			break;
		case '7':
			cout<<"\n\n\tExiting Dealership Inventory System...";
			break;
		default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
    }while(ch!='7');
	return 0;

}
