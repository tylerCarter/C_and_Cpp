#include "../../std_lib_facilities.h"

// read first and second name

int main()
{
	cout << "Please enter your first and second names\n";
	string first;
	string second;
	cin >> first >> second;		// read two strings
	string name = first + ' ' + second;
	cout << "Hello, " << name << '\n';
}