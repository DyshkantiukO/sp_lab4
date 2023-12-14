#include <iostream>
#include "calculator.h"

using namespace std;

int main() {	
	Calculator calculator;
	double a = 5.4;
	double b = 4.2;
	cout << "Add: " << a << " + " << b << " = " << calculator.Add(a, b) << endl;
	cout << "Sub: " << a << " - " << b << " = " << calculator.Sub(a, b) << endl;
	return 0;
}
