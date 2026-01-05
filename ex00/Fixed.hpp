/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:16:43 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/05 10:43:15 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
    int _fixed_value;
    static const int _fract_bits = 8;
    
    public:
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    Fixed();
    Fixed(const Fixed &other);
    void setRawBits(int const raw);
    ~Fixed();
};

#endif