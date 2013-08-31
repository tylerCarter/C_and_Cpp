#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int radius;

	cout << "Enter the circle radius: ";
	cin >> radius;

	cout << "Diameter is " << radius * 2
		  << "\nCircumference is " << 2 * 3.14159 * radius
		  << "\nArea is " << 3.14159 * radius * radius << endl;

	return 0;
}