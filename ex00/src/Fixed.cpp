/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/20 16:33:33 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 00:33:49 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fixed_point_value_ = 0;
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &other)
		return *this;
	
	this->fixed_point_value_ = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_point_value_);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	fixed_point_value_ = raw;	
}
