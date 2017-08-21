#include <iostream>

using namespace std;

// Prototype for passing arrays to functions. This references the function 
// at the end of this c++ file.
void printArray( int theArray[], int sizeOfArray );

int main() {

// Passing arrays to functions.

	int rivka[6] = {5,98,64,91,27,28};
	int yael[3] = {76,83,90};

	printArray(rivka,5);
	printArray(yael,3);

	cout << "==================================================" << endl;

// Arrays created with loops.

	int ephraim[9];	

	cout << "Elements - Values " << endl;	
	

	for (int x = 0; x <= 9; x++) {
	
		ephraim[x] = 99;
		
		cout << x << " ------- " << ephraim[x] << endl;
	
	
	}

	cout << "===================================================" << endl;



// Using arrays with calculations.

	int sum = 0;
	int effy[5] = {586, 983, 32, 98, 44};

	for (int i = 0; i < 5; i++) {

		sum += effy[i];
		cout << sum << ", ";

	cout << endl;

	}
	
	cout << "===================================================" << endl;

// Multidimensional arrays print out.

	int kangaroo[4][3] = {{2,7,4},{7,9,2},{3,4,2},{8,2,6}};

	for ( int row = 0; row < 4; row++) {

		for (int column = 0; column < 3; column++) {
			cout << kangaroo[row][column] << " ";
		
		}

	cout << endl;

	}

}



void printArray( int theArray[], int sizeOfArray ) {

	for (int a = 0; a < sizeOfArray; a++) {
		cout << theArray[a] << endl;
	}

}


