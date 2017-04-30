#include "testclass.hpp"
int main() {
	Complex<int> x(10, 15);
	Complex<int> y(23, 13);

	cout << "Addition: ";
	x.add(y);
	x.print();

	cout << "Subtraction: ";
	x.sub(y);
	x.print();

	cout << "Multiplication by number: ";
	x.mult(20);
	x.print();

	cout << "Division by number: ";
	x.div(5);
	x.print();

	cout << "Multiplication by complex number: ";
	x.multi_complex(y);
	x.print();


	cout << "Division by zero\n";
	x.div(0);
	x.print();

	system("pause");
	return 0;
}