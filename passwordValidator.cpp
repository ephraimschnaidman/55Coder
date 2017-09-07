#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "Hello world!!\n";

	string username;
	string password;
	int p;

	p = 5;

	cout << "Enter your username: " << "\n";
	getline(cin, username, '\n' );

	while ( password != "root" && p > -1 )
	{
		cout << "Enter your password: " << "\n";
		getline(cin, password, '\n' );
		if ( password == "root" )
		{
			break;
		}
		else if (p > 1)
		{	
			cout << "Invalid password. Please try again.\n";
			cout << "You have " << p << " more attempts left.\n";
			p--;
		}
		else if (p == 1)
		{
			cout << "Invalid password. Please try again.\n";
			cout << "You have " << p << " more attempt left.\n";
			p--;		
		}
		else if (p < 1)
		{
			break;
		} 		
		
	} 

	if (password == "root")	
	{
		cout << "Welcome " << username << "! You got the password right!\n";
	}
	else
	{
		cout << "Invalid password. Too many attempts. Please try again later.\n";
	}
	
}
