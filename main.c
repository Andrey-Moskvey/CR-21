#include "task2.h"

int main(){
	Rational r(24, 40);
	r = r.IrreducibleFraction(r.numerator(), r.denominator());
	//std::cout << r.numerator() << " " << r.denominator() << std::endl;

	return 0;
}
