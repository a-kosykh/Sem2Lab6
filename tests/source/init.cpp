#include <testclass.hpp>
#include <catch.hpp>

SCENARIO ("constructorTest"){
	Complex comp(20,13);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 20);
	REQUIRE (Imag == 13);
}

SCENARIO ("Addition"){
	Complex comp1(20,13);
	Complex comp2(12,14);
	Comp1.add(comp2);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 32);
	REQUIRE (Imag == 27);
}

SCENARIO ("Sub"){
	Complex comp1(20,13);
	Complex comp2(12,14);
	Comp1.sub(comp2);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 8);
	REQUIRE (Imag == 1);
}

SCENARIO ("MultiNum"){
	Complex comp1(20,13);
	Comp1.mult(2);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 40);
	REQUIRE (Imag == 26);
}

SCENARIO ("DivNum"){
	Complex comp1(20,14);
	Comp1.div(2);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 10);
	REQUIRE (Imag == 7);
}

SCENARIO ("DivNumZero"){
	Complex comp1(20,13);
	Comp1.div(0);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 20);
	REQUIRE (Imag == 13);
}

SCENARIO("MultiComplex"){
	Complex comp1(20,13);
	Complex comp2(12,14);
	Comp1.multi_complex(comp2);
	Real = comp.getReal();
	Imag = comp.getImag();
	REQUIRE (Real == 58);
	REQUIRE (Imag == 436);
}
