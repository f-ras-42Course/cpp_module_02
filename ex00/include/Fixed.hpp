/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/20 16:33:42 by fras          #+#    #+#                 */
/*   Updated: 2024/05/20 17:02:48 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int fixed_point_value_;
		static const int fractional_bits_ = 8;			
	public:
		Fixed();
		~Fixed();
};
