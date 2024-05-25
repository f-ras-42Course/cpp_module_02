/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/20 16:33:42 by fras          #+#    #+#                 */
/*   Updated: 2024/05/26 00:33:49 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int fixed_point_value_;
		static const int fractional_bits_ = 8;			
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		int	getRawBits() const;
		void setRawBits(const int raw);
};
