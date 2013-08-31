#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num1, num2;

	cout << "Enter two integers: ";
	cin >> num1 >> num2;

	if ( num1 == num2 )
		cout << "Two numbers are equal" << endl;

	if ( num1 > num2 )
		cout << num1 <<" is larger" << endl;
	
	if ( num2 > num1 )
		cout << num2 <<" is larger" << endl;

	return 0;
}