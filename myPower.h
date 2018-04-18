#ifndef my_power_h
#define my_power_h
#include <iostream>
#include <stdexcept>
using namespace std;
double Power(double base, int exponent) {
	double mybase=base;
	if (exponent==0) return 1;
	else if (exponent>0) {
		while (exponent!=1) {
			base*=mybase;
			exponent--;
		}
	}
	else {
		if (base==0) 
			throw invalid_argument("The result is infinite.");

		exponent=-exponent;
        while (exponent!=1) {
            base*=mybase;
            exponent--;
        }
		base=1/base;
	}
	return base;
}
#endif
