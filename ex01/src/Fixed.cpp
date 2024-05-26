/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/25 15:52:33 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 08:23:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called\n";
	fixed_point_value_ = i << fractional_bits_; 
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called\n";
	fixed_point_value_ = static_cast<int>(roundf(f * (1 << fractional_bits_)));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called (float: "<< *this << ")\n"; -- for debug
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &other)
		return *this;
	
	this->fixed_point_value_ = other.fixed_point_value_;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return fixed_point_value_;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	fixed_point_value_ = raw;	
}

int Fixed::toInt() const
{
	return fixed_point_value_ >> fractional_bits_;
}

float Fixed::toFloat() const
{
	return static_cast<float>(fixed_point_value_) / (1 << fractional_bits_);
}
