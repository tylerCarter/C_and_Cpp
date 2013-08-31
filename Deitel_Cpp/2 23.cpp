#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4, num5; // Пять целых чисел
	int largest, smallest; // Самое большое и самое маленькое число

	cout << "Enter five integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	largest = num1;

	if ( largest < num2 )
		largest = num2;
	if ( largest < num3 )
		largest = num3;
	if ( largest < num4 )
		largest = num4;
	if ( largest < num5 ) 
		largest = num5;

	smallest = num1;

	if ( smallest > num2 )
		smallest = num2;
	if ( smallest > num3 )
		smallest = num3;
	if ( smallest > num4 )
		smallest = num4;
	if ( smallest > num5 ) 
		smallest = num5;

	cout << "The largest integer is " << largest
		  << "\nThe smallest integer is " << smallest << endl;

	return 0;
}
