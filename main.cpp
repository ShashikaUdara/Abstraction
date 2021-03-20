#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	// abstraction example
	double resultVal = 0.0;
	
	// defining object cal with an initial value
	Calculator cal(10);

	// adding 2.2
	cal.add(2.2);

	// deducting 5
	cal.sub(5);

	// deviding it by 2
	cal.div(2);

	// multiply it by 4 (should make 14.4)
	cal.mul(4);

	// showing the final value
	resultVal = cal.showVal();

	cout <<"The final result value is: "<< resultVal <<endl;

	return 0;
}