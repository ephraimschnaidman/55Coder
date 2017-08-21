#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Bob;
	string Jon;
	int Bob_age;
	int Jon_age;
	float ageTotal;
	float ageDiff;
	float ageAvg;

	cout << "Enter Bob's age: " << "\n";
	cin >> Bob_age;
	cout << "Enter Jon's age: " << "\n";
	cin >> Jon_age;

	ageTotal = Bob_age + Jon_age;
	ageAvg = ageTotal / 2;

	if (Bob_age > Jon_age) {

		ageDiff = Bob_age - Jon_age;

	}
	else {

		ageDiff = Jon_age - Bob_age;

	}
	
	
		
	
	

	if (Bob_age > Jon_age)
	{
		cout << "Bob is older than Jon.\n";
	}
	else if (Bob_age == Jon_age)
	{
		cout << "They are both the same age!!\n";
	}
	else
	{
		cout << "Jon is older than Bob.\n";
	}


	if (Bob_age > 100)
	{
		cout << "Bob is really old!\n";
	}
	else if (Jon_age > 100)
	{
		cout << "Jon is really old!!\n";
	}
	else if (Bob_age > 100 && Jon_age > 100)
	{
		cout << "These guys are both old geezers!!\n";
	} 


	cout << "The total age of Bob and Jon is " << ageTotal << endl;
	cout << "The difference of age between Bob and Jon is " << ageDiff << endl;
	cout << "The average age of Bob and Jon is " << ageAvg << endl;
}

