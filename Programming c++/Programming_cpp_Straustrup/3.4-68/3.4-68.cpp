#include "../../std_lib_facilities.h"

// simple program to exercise operators
int main()
{
	cout << "Please enter a floating-point value: ";
	int n;
	cin >> n;
	cout << "n == " << n
	     << "\nn+1 == " << n+1
		 << "\nthree times n == " << 3*n
		 << "\ntwice n == " << n+n
		 << "\nn squared == " << n*n
		 << "\nhalf of n == " << n/2
		 << "\nsquare root of n == " << sqrt(n)
		 << "\nmodulo of n by 2 == " << n%2
		 << "\nn/2 * 2 + n%2 == n is " << ((n/2 *2 + n%2) == n) // from the definition of *, / and %
		 << endl;	// another name of newline("end of line")
}