#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int num1, num2;

	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	
	cout << "The sum is " << num1 + num2
		  << "\nThe product is " << num1 * num2
		  << "\nThe difference is " << num1 - num2
		  << "\nThe quotient is " << num1 / num2 << endl;

	return 0;
}