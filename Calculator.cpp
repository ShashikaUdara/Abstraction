#include "Calculator.h"

void Calculator :: add(double a)
{
	value += a;
}

void Calculator :: sub(double s)
{
	value -= s;
}

void Calculator :: mul(double m)
{
	value *= m;
}

void Calculator :: div(double d)
{
	value /= d;
}

double Calculator :: showVal()
{
	return value;
}
