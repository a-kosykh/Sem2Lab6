#include <testclass.hpp>
#include <catch.hpp>

SCENARIO ("constructorTest"){
	Complex<int> comp1(20,13);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 20);
	REQUIRE (Imag == 13);
}

SCENARIO ("Addition"){
	Complex<int> comp1(20,13);
	Complex<int> comp2(12,14);
	comp1.add(comp2);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 32);
	REQUIRE (Imag == 27);
}

SCENARIO ("Sub"){
	Complex<int> comp1(20,13);
	Complex<int> comp2(12,14);
	comp1.sub(comp2);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 8);
	REQUIRE (Imag == -1);
}

SCENARIO ("MultiNum"){
	Complex<int> comp1(20,13);
	comp1.mult(2);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 40);
	REQUIRE (Imag == 26);
}

SCENARIO ("DivNum"){
	Complex<int> comp1(20,14);
	comp1.div(2);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 10);
	REQUIRE (Imag == 7);
}

SCENARIO ("DivNumZero","[!mayfail]"){
	Complex<int> comp1(20,13);
	comp1.div(0);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 20);
	REQUIRE (Imag == 13);
}

SCENARIO("MultiComplex"){
	Complex<int> comp1(20,13);
	Complex<int> comp2(12,14);
	comp1.multi_complex(comp2);
	double Real = comp1.getReal();
	double Imag = comp1.getIm();
	REQUIRE (Real == 58);
	REQUIRE (Imag == 436);
}
SCENARIO("ostreamtest"){
	Complex<int> comp1(20,13);
	ostream out;
	out << comp1;
	cout << "20 + i*(13)";
	REQUIRE(&out == &cout);
}