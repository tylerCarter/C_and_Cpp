#include "../../std_lib_facilities.h"
// read name and age
int main()
{
	cout << "Please enter your first name and age\n";
	string first_name;	// string variable
	int age;			// integer variable
	cin >> first_name;	// read a string
	cin >> age;			// read an integer
	cout <<"Hello, "<<first_name<<" (age"<<age<<")\n";

	keep_window_open();
}