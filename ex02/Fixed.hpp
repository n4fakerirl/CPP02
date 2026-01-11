/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:23 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 01:43:42 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed 
{
    private:
    int _fixed_value;
    static const int _fract_bits = 8;
    
    public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float flo);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);
    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed operator/(const Fixed &other);
    bool operator<(const Fixed& other) const;
    bool operator>(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);