#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	float pi2 = pi * pi;
	float x2 = x * x;
	float exp1a = pi2 * (x2 + 0.5);
	float exp1b = pi2 * (x2 - 0.5) * (x2 - 0.5);
	float exp2a = x2 / exp1a;
	float exp2b = 1 +(x2 / exp1b);
	y = exp2a * exp2b;
	cout << "y = " << y;
	return 0;
}