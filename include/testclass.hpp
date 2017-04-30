#include <iostream>
using namespace std;

template <typename T>
class Complex {
	T Real_;
	T Im_;
public:
	Complex() {
		Real_ = 0;
		Im_ = 0;
	}
	Complex(T x, T y) {
		Real_ = x;
		Im_ = y;
	}
	T getReal() {
		return Real_;
	}
	T getIm() {
		return Im_;
	}

	void add(Complex<T> comNum);
	void sub(Complex<T> comNum);
	void mult(int num);
	void div(int num);
	void multi_complex(Complex<T> comNum);

	void print() {
		cout << Real_ << " + i*(" << Im_ << ')' << endl;
	}
};

template<typename T>
void Complex<T>::add(Complex<T> comNum)
{
	Real_ += comNum.getReal();
	Im_ += comNum.getIm();
}

template<typename T>
void Complex<T>::sub(Complex<T> comNum)
{
	Real_ -= comNum.getReal();
	Im_ -= comNum.getIm();
}

template<typename T>
void Complex<T>::mult(int num)
{
	Real_ *= num;
	Im_ *= num;
}

template<typename T>
void Complex<T>::div(int num)
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

template<typename T>
void Complex<T>::multi_complex(Complex<T> num)
{
	T tmp = Real_;
	Real_ = Real_*num.getReal() - Im_*num.getIm();
	Im_ = tmp*num.getIm() + Im_*num.getReal();
}