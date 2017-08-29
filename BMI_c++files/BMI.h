#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {

public:
	//Default constructor
	BMI();

	//Overload constructor
	BMI(string, int, double);

	//Destructor
	~BMI();

	// Accessor functions
	string getName() const;
	//getName - returns name of patient (defined in BMI.cpp)

	int getHeight() const;
	
	double getWeight() const;

	//Mutator functions
	void setName(string);
		//sets name of patient
	
	void setHeight(int);

	void setWeight(double);

	double calculateBMI() const;
	

private:
// Member variables
	string newName;
	int newHeight;
	double newWeight;


};

#endif
