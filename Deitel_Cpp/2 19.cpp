#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num1, num2, num3, smallest, largest;

	cout << "Input thee different integers: "; 
	cin >> num1 >> num2 >> num3;

	largest = num1;

	if ( num2 > largest )
		largest = num2;

	if ( num3 > largest )
		largest = num3;

	smallest = num1;

	if ( num2 < smallest )
		smallest = num2;

	if ( num3 < smallest )
		smallest = num3;

	cout << "Sum is " << num1 + num2 + num3
		<< "\nAverage is " << (num1 + num2 + num3) / 3
		<< "\nProduct is " << num1 * num2 * num3
		<< "\nSmallest is " << smallest
		<< "\nLargest is " << largest << endl;

	return 0;
}