/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:23 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 01:42:19 by ocviller         ###   ########.fr       */
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
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int getRawBits(void) const;
    Fixed(const int nbr);
    Fixed(const float flo);
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);