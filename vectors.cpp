#include <iostream>
#include <vector>

using namespace std;

// Declaring the functions:
void createVector(vector<int>&);

void vectorPrintOut(const vector<int>&);

void vectorReverse(const vector<int>&);

void vectorPrintEvens(const vector<int>&);

void vectorReplaceNum(vector<int>&);

int main () {

	vector<int> myVector;

	// myVector.push_back(value) --> adds an element to the END of the vector and resizes it
	
	myVector.push_back(586);
	myVector.push_back(983);
	myVector.push_back(32);
	myVector.push_back(98);
	myVector.push_back(44);

	vectorPrintOut(myVector);

	// myVector.begin() ---> reads vector from first element (index 0)
	// myVector.insert(myVector.begin() + index no, integer) --> adds element BEFORE specified index no
	myVector.insert(myVector.begin() + 2, 5);
	myVector.insert(myVector.begin(), 78);
	myVector.push_back(27);

	vectorPrintOut(myVector);

	// Print the element at index 1:
	cout << myVector.at(1) << endl;
	cout << endl;
		
	// Erase the element at index 3:
	myVector.erase(myVector.begin() +3);

	vectorPrintOut(myVector);

	vectorReverse(myVector);

	vectorPrintEvens(myVector);

	vectorReplaceNum(myVector);

	if (myVector.empty()) {
		cout << "Vector is empty!" << endl;
	}
	else {
		cout << "Vector is NOT empty." << endl;
	}

	cout << endl;

	vectorPrintOut(myVector);

	myVector.clear();
	
	cout << "Emptying Vector (myVector)." << endl;

	if (myVector.empty()) {
		cout << "Vector is empty!" << endl;
	}
	else {
		cout << "Vector is NOT empty." << endl;
	}

	createVector(myVector);

	vectorPrintOut(myVector);

}

// Function definitions

void createVector(vector<int>& myVectorTwo) {
	int input;
	char s;
	cout << "Enter a list of random numbers. Type 's' to input the set of numbers.\n";
	cin >> input;

	while (input != s) {
		myVectorTwo.push_back(input);
		cin >> input;
	}	

	cout << endl;
}

void vectorPrintOut(const vector<int>& myVectorTwo) {
	
	cout << "Vector: ";

	for (unsigned int i = 0; i < myVectorTwo.size(); i++) {

		cout << myVectorTwo[i] << ", ";
	}

	if (myVectorTwo.size() > 1) {
		cout << "There are " << myVectorTwo.size() << " elements in this vector." << endl;
	}
	else if (myVectorTwo.size() == 1) {
		cout << "There is 1 element in this vector." << endl;
	}
	else if (myVectorTwo.size() < 1) {
		cout << "There are  0 elements in this vector." << endl;
	}
	
	cout << endl;
}

void vectorReverse(const vector<int>& myVectorTwo) {

	cout << "The Vector in reverse order: ";

	for (unsigned int i = myVectorTwo.size(); i > 0; i--) {

		// 
		cout << myVectorTwo[i - 1] << ", ";
	}

	cout << endl;
	cout << endl;
}

void vectorPrintEvens(const vector<int>& myVectorTwo) {
	
	cout << "The even numbers in the Vector: ";

	for (unsigned int i = 0; i < myVectorTwo.size(); i++) {

		if ((myVectorTwo[i] % 2) == 0) {
			cout << myVectorTwo[i] << ", ";
		}
	}

	cout << endl;
	cout << endl;
}

void vectorReplaceNum(vector<int>& myVectorTwo) {

	int old, replace;
	cout << "Type in a number from the vector list, hit enter, and type another number to replace it.\n";
	cin >> old >> replace;

	for (unsigned int i = 0; i < myVectorTwo.size(); i++) {
		if (myVectorTwo[i] == old) {
			myVectorTwo[i] = replace;
		}
	}
	
	cout << endl;

	vectorPrintOut(myVectorTwo);

	cout << endl;
}
