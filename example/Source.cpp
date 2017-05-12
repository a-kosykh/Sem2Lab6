#include "testclass.hpp"
int main() {
	Complex<int> x(10, 15);
	Complex<int> y(23, 13);

	cout << "Addition: ";
	x.add(y);
	cout << x;

	cout << "Subtraction: ";
	x.sub(y);
	cout << x;

	cout << "Multiplication by number: ";
	x.mult(20);
	cout << x;

	cout << "Division by number: ";
	x.div(5);
	cout << x;

	cout << "Multiplication by complex number: ";
	x.multi_complex(y);
	cout << x;


	cout << "Division by zero\n";
	x.div(0);
	cout << x;

	system("pause");
	return 0;
}