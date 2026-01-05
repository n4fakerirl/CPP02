/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:23 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/05 15:01:31 by ocviller         ###   ########.fr       */
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
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    Fixed();
    Fixed(const int nbr);
    Fixed(const float flo);
    Fixed(const Fixed &other);
    void setRawBits(int const raw);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);