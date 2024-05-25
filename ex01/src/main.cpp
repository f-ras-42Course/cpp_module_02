/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/25 15:52:48 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 00:31:35 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

int main()
{
	Fixed z(1);
	std::cout << "z is " << z.toInt() << std::endl;
	Fixed f(2.75f);
	std::bitset <32> x(f.getRawBits());
	std::cout << "float " << x << std::endl;
	std::cout << "f is (int)" << f.toInt() << std::endl;
	std::cout << "f is (float)" << f.toFloat() << std::endl;
	

	float a = 1;
	std::cout << a << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		a /= 2;
		std::cout << a << std::endl;
	}

	std::cout << "\n\n";
	a = 16777215;
	std::cout << a << std::endl;
	for (size_t i = 0; i < 32; i++)
	{
		a /= 2;
		std::cout << a << std::endl;
	}	
	// Fixed a;
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );
	// a = Fixed( 1234.4321f );
	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}