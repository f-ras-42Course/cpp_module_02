/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/26 08:27:13 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 19:24:16 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point_value_ = 0;
}
Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::Fixed(const int i)
{
	fixed_point_value_ = i << fractional_bits_; 
}

Fixed::Fixed(const float f)
{
	fixed_point_value_ = static_cast<int>(roundf(f * (1 << fractional_bits_)));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->fixed_point_value_ = other.fixed_point_value_;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed& other) const
{
	if (fixed_point_value_ == other.fixed_point_value_)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (fixed_point_value_ != other.fixed_point_value_)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (fixed_point_value_ <= other.fixed_point_value_)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (fixed_point_value_ >= other.fixed_point_value_)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& other) const
{
	if (fixed_point_value_ < other.fixed_point_value_)
		return true;
	return false;
}

bool Fixed::operator>(const Fixed& other) const
{
	if (fixed_point_value_ > other.fixed_point_value_)
		return true;
	return false;
}

Fixed& Fixed::operator*(const Fixed& other)
{
	fixed_point_value_ *= (other.fixed_point_value_ >> fractional_bits_);
	return *this;
}

Fixed& Fixed::operator/(const Fixed& other)
{
	fixed_point_value_ /= (other.fixed_point_value_ >> fractional_bits_);
	return *this;
}

Fixed& Fixed::operator+(const Fixed& other)
{
	fixed_point_value_ += other.fixed_point_value_;
	return *this;
}

Fixed& Fixed::operator-(const Fixed& other)
{
	fixed_point_value_ -= other.fixed_point_value_;
	return *this;
}

Fixed& Fixed::operator++()
{
	++(this->fixed_point_value_);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	(this->fixed_point_value_)++;
	return temp;
}

Fixed& Fixed::operator--()
{
	--(this->fixed_point_value_);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	(this->fixed_point_value_)--;
	return temp;
}

int	Fixed::getRawBits() const
{
	return fixed_point_value_;
}

void Fixed::setRawBits(const int raw)
{
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

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	return (fixed1 < fixed2) ? fixed1 : fixed2;
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	return (fixed1 < fixed2) ? fixed1 : fixed2;
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	return (fixed1 > fixed2) ? fixed1 : fixed2;
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	return (fixed1 > fixed2) ? fixed1 : fixed2;
}


/*		
		Constructor/destructor messages

	std::cout << "Default constructor called\n";
	std::cout << "Copy constructor called\n";
	std::cout << "Int constructor called\n";
	std::cout << "Float constructor called\n";
	// std::cout << "Destructor called (float: "<< *this << ")\n"; -- for debug
	std::cout << "Destructor called\n";
	std::cout << "Copy assignment operator called\n";
	std::cout << "getRawBits member function called\n";	
	std::cout << "setRawBits member function called\n";
*/