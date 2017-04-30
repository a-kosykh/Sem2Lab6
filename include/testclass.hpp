#include <iostream>
using namespace std;

class Complex {
	double Real_;
	double Im_;
public:
	Complex() {
		Real_ = 0;
		Im_ = 0;
	}
	Complex(double x, double y) {
		Real_ = x;
		Im_ = y;
	}
	double getReal() {
		return Real_;
	}
	double getIm() {
		return Im_;
	}

	void add(Complex comNum);
	void sub(Complex comNum);
	void mult(int num);
	void div(int num);
	void multi_complex(Complex comNum);

	void print() {
		cout << Real_ << " + i*(" << Im_ << ')' << endl;
	}
};

void Complex::add(Complex comNum)
{
	Real_ += comNum.getReal();
	Im_ += comNum.getIm();
}

void Complex::sub(Complex comNum)
{
	Real_ -= comNum.getReal();
	Im_ -= comNum.getIm();
}

void Complex::mult(int num)
{
	Real_ *= num;
	Im_ *= num;
}

void Complex::div(int num)
{
	try {
		if (num != 0) {
			Real_ /= num;
			Im_ /= num;
		}
		else throw "Division by zero!\n";
	}
	catch (char *msg) {
		cout << "Error: " << msg;
	}
}

void Complex::multi_complex(Complex num)
{
	double tmp = Real_;
	Real_ = Real_*num.getReal() - Im_*num.getIm();
	Im_ = tmp*num.getIm() + Im_*num.getReal();
}