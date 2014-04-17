#ifndef _COMPLEX_FUN
#define	_COMPLEX_FUN
#include "type_complex.h"
namespace ComplexNS{
	Complex umn(Complex a, Complex b);
	Complex umn(Complex a, double b);
	Complex sum(Complex a, Complex b);
	double length(Complex a);
	void print(Complex a);
}
#endif
