/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/20 16:33:42 by fras          #+#    #+#                 */
/*   Updated: 2024/05/21 14:44:37 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int fixed_point_value_;
		static const int fractional_bits_ = 8;			
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		// Fixed(int i);
		~Fixed();
		Fixed& operator = (const Fixed& fixed); 
};
