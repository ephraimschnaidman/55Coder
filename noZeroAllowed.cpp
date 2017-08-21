#include <iostream>

using namespace std;

int main()

{
	cout << "Hello world!!\n";
	
	float first_num;
	float second_num;
	float sum;


	cout << "Enter a number: \n";
	cin >> first_num;	


	while ( first_num == 0 )
	{
		cout << "No ZEROs allowed! Try again.\n";
		cout << "Enter a number: \n";
		cin >> first_num;
	}	

	cout << "Enter a second number: \n";
	cin >> second_num;

	while ( second_num == 0)
	{
		cout << "No ZEROs allowed! Try again.\n";
		cout << "Enter a second number: \n";
		cin >> second_num;
	}

	sum = first_num + second_num;
	cout << "The sum is: " << sum << "\n";
	return 0;

}
