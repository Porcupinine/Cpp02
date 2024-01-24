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

		bool operator<(const Fixed& fix) const;
		bool operator>(const Fixed& fix) const;
		bool operator<=(const Fixed& fix) const;
		bool operator>=(const Fixed& fix) const;
		bool operator==(const Fixed& fix) const;
		bool operator!=(const Fixed& fix) const;

		Fixed operator+(const Fixed& fix) const;
		Fixed operator-(const Fixed& fix) const;
		Fixed operator*(const Fixed& fix) const;
		Fixed operator/(const Fixed& fix) const;

		Fixed operator++();
		Fixed operator--();
		void operator++(int);
		void operator--(int);

		static Fixed min(Fixed& f1, Fixed& f2) ;
		static Fixed max(Fixed& f1, Fixed& f2) ;
		static Fixed min(const Fixed& f1, const Fixed& f2);
		static Fixed max(const Fixed& f1, const Fixed& f2);

};
std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif //CPP02_FIXED_H
