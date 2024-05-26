/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/26 08:27:05 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 08:27:08 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point_value_;
		static const int fractional_bits_ = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		friend std::ostream& operator<<(std::ostream &out, const Fixed& fixed);
		int	getRawBits() const;
		void setRawBits(const int raw);
		int toInt() const;
		float toFloat() const;
};
