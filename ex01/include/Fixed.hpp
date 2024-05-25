/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/25 15:52:22 by fras          #+#    #+#                 */
/*   Updated: 2024/05/25 16:18:02 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point_number_value_;
		static const int fractional_bits_ = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		int	getRawBits() const;
		void setRawBits(const int raw);
		int toInt() const;
		int toFloat() const;
};
