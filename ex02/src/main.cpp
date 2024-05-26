/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/26 08:27:25 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 19:26:38 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "\n--* Extra Tests *--\n";
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "\nComparisons:\n";
	int i(0);
	Fixed c(1.75f), d(1.75f);
	if (c == d)
		std::cout << "true" << ++i << std::endl; // - 1
	if (c <= d)
		std::cout << "true" << ++i << std::endl; // - 2
	if (c >= d)
		std::cout << "true" << ++i << std::endl; // - 3
	c = 1;
	if (c != d)
		std::cout << "true" << ++i << std::endl; // - 4
	if (c <= d)
		std::cout << "true" << ++i << std::endl; // - 5
	if (d >= c)
		std::cout << "true" << ++i << std::endl; // - 6
	if (c < d)
		std::cout << "true" << ++i << std::endl; // - 7
	if (d > c)
		std::cout << "true" << ++i << std::endl; // - 8
	std::cout << "\nArithmetic operations:\n";
	Fixed const e(Fixed(5.05f));
	Fixed const f(Fixed(5.05f) / Fixed(2));
	Fixed const g(Fixed(5.05f) + Fixed(2));
	Fixed const h(Fixed(5.05f) - Fixed(2));
	Fixed const j(Fixed(2) - Fixed(5.05f));
	std::cout << e << std::endl;
	std::cout << f << std::endl;
	std::cout << g << std::endl;
	std::cout << h << std::endl;
	std::cout << j << std::endl;
	std::cout << "\nTable | from 2^7 till lowest representable value:\n";
	Fixed k(128);
	for (size_t i = 0; i < 16; i++)
	{
		std::cout << k << std::endl;
		k = k / 2;
	}	
	return 0;
	}
