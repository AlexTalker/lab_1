#include "fun_complex.h"
#include <cmath>
#include <iostream>
namespace ComplexNS {
	Complex umn(Complex a, Complex b) {
		Complex c;
		c.x = (a.x * b.x) - (a.y * b.y);
		c.y = (a.y * b.x) + (a.x * b.y);
		return c;
	}
	Complex umn(Complex a, double b) {
		Complex c;
		c.x = a.x * b;
		c.y = a.y * b;
		return c;
	}
	Complex sum(Complex a, Complex b) {
		Complex c;
		c.x = a.x + b.x;
		c.y = a.y + b.y;
		return c;
	}
	double length(Complex a) {
		double b = 0;
		b = sqrt((a.x*a.x)+(a.y*a.y));
		return b;
	}
	void print(Complex a){
		std::cout << a.x << " " << a.y << "i" << std::endl;
	}
}
