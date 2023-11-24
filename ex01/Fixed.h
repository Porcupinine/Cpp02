/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:51:48 by laura         #+#    #+#                 */
/*   Updated: 2023/11/17 14:51:48 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <ostream>

class Fixed {
	private:
		int fixed{};
		static const int frac;
	public:
		Fixed();
		Fixed(const int fix);
		Fixed(const float f);
		Fixed (const Fixed &cp);
		~Fixed();
		Fixed& operator=(const Fixed& cp);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat() const;
		int toInt() const;
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fix);
};


#endif //CPP02_FIXED_H
