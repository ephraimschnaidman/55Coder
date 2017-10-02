#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string user_first_name;
	string user_last_name;
	cout << "Please enter your first name: ";
	cin >> user_first_name;
	cout << "Please enter your last name: ";
	cin >> user_last_name;
	string user_full_name = user_first_name + " " + user_last_name;
	cout << "Hi, " << user_full_name << "!\n";

	ofstream userName;
	userName.open("userName.txt");
	userName << user_full_name << endl;
	userName.close();
}
