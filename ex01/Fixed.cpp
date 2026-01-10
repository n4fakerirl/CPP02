/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:41 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/10 19:37:30 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_value(0) 
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int nbr)
{
    this->setRawBits(nbr << this->_fract_bits);
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float flo)
{
    this->setRawBits((int)roundf(flo * 256));
    std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    operator=(other);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    this->_fixed_value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    return (this->_fixed_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((static_cast<float>(this->_fixed_value) / (1 << this->_fract_bits)));
}

int Fixed::toInt(void) const
{
    return (this->_fixed_value >> 8);
}
