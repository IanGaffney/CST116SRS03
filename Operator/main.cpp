// main.cpp : Operator main
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

/*
Create a project named "Operator" that takes 4 numbers separated by whitespace as input.

The first 2 numbers are of type "int" named i0 and i1. The last 2 numbers are of type "double" named d0 and d1.

Using C++ I/O Streams, output the results of the binary operators as shown on page 148 Table 6.3.1.

Create output that shows the results of these operators for all 3 combinations of types. For example:

i0 + i1 == 4
i0 + d0 == 42.1
d0 + d1 == 42.2

Left justify the results to the right of the double equals sign.

Show the output in the order of the operator precedence.
*/

int main()
{
	int i0{};
	int i1{};
	double d0{};
	double d1{};

	std::cin >> i0 >> i1 >> d0 >> d1;

	std::cout.setf(std::ios::left);
	std::cout << "i0 * i1 == " << i0 * i1 << std::endl;
	std::cout << "i0 * d0 == " << i0 * d0 << std::endl;
	std::cout << "d0 * d1 == " << d0 * d1 << std::endl;

	std::cout << "i0 / i1 == " << i0 / i1 << std::endl;
	std::cout << "i0 / d0 == " << i0 / d0 << std::endl;
	std::cout << "d0 / d1 == " << d0 / d1 << std::endl;

	std::cout << "i0 % i1 == " << i0 % i1 << std::endl;

	std::cout << "i0 + i1 == " << i0 + i1 << std::endl;
	std::cout << "i0 + d0 == " << i0 + d0 << std::endl;
	std::cout << "d0 + d1 == " << d0 + d1 << std::endl;

	std::cout << "i0 - i1 == " << i0 - i1 << std::endl;
	std::cout << "i0 - d0 == " << i0 - d0 << std::endl;
	std::cout << "d0 - d1 == " << d0 - d1 << std::endl;

    return 0;
}

