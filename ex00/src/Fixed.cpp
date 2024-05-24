/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/20 16:33:33 by fras          #+#    #+#                 */
/*   Updated: 2024/05/24 16:12:46 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor Called\n";
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point_number_value_ = other.fixed_point_number_value_;
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
	
	this->fixed_point_number_value_ = other.fixed_point_number_value_;
	return *this;
}

int	Fixed::getRawBits() const
{
	return (fixed_point_number_value_);
}

void Fixed::setRawBits(const int raw)
{
	fixed_point_number_value_ = raw;	
}
