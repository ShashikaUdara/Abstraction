#ifndef CALCULATORH
#define CALCULATOR

using namespace std;

class Calculator
{
public:
	Calculator(double i) { value = i; }
	~Calculator() {}

	// interface function
	void add(double a);
	void sub(double s);
	void mul(double m);
	void div(double d);
	double showVal();

private:
	double value;

};

#endif