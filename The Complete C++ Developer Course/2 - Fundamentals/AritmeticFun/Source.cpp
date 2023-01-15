#include <iostream>

using namespace std;


int main() {
	int a = 10;
	int b = 3;
	int sum = a + b;
	int diffrence = a - b;
	int product = a * b;
	int quotient = a / b;
	double remainder = a % b;

	sum += 10;

	cout << "Sum =" << sum << endl;
	cout << "quotient =" << quotient << endl;
	cout << "remainder =" << remainder << endl;
	return 0;
}