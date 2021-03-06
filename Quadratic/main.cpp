// main.cpp : Quadratic main
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cassert>

/*
Create a program named "Quadratic" that calculates the roots of a quadratic equation.

Prompt the user for input of the values a, b, and c with a clear and concise prompt.

Solve the quadratic equation and show both the roots.
*/

int main()
{
	double a{};
	double b{};
	double c{};
	double sqrtConst{};
	double x1{};
	double x2{};

	std::cout << "Enter the constants for your quadratic equation:" << std::endl;
	std::cout << "Constant \"a\"" << std::endl;
	std::cin >> a;
	std::cout << "Constant \"b\"" << std::endl;
	std::cin >> b;
	std::cout << "Constant \"c\"" << std::endl;
	std::cin >> c;
	std::cout << std::endl;

	sqrtConst = (b * b) - (4 * a * c);

	// cannot do the square root of a negative
	assert(sqrtConst >= 0);

	x1 = (-b + sqrt(sqrtConst)) / (2 * a);
	x2 = (-b - sqrt(sqrtConst)) / (2 * a);

	std::cout << "Solution Set: { " << x1 << ", " << x2 << " }" << std::endl;

    return 0;
}

