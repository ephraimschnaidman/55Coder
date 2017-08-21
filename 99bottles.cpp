#include <iostream>

using namespace std;

int main()

{
	cout << "Hello world!!\n";
	
	for (int i = 99; i > 1 ; i-- )
	{
		if (i > 1)
		{
			cout << i << " bottles of beers on the wall.\n";
			cout << "Take one down from off of the wall, " << i - 1 << " bottles of beers on the wall.\n";
		}
		else if (i == 1)
		{
			cout << "Take one down from off of the wall, 1 bottle of beer on the wall.\n";
		}
	}	
	
	cout << "1 bottle of beer on the wall.\n";
	cout << "Take one down from off of the wall, 0 bottles of beer on the wall.\n";	
	
}
