#include "../../std_lib_facilities.h"

int main()
{
	cout<<"Please enter your name and age\n";
	string name;
	double age;
	cin>>name>>age;
	cout<<"Hello, "<<name<<" (your age in months: "<<age * 12<<")\n";

	keep_window_open();
}