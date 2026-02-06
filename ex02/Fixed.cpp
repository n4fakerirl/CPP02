/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:41 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/06 10:42:33 by ocviller         ###   ########.fr       */
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

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}

bool Fixed::operator<(const Fixed& other) const
{
    if (this->toFloat() < other.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator>(const Fixed& other) const
{
    if (this->toFloat() > other.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
    if (this->toFloat() <= other.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
    if (this->toFloat() >= other.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
    if (this->toFloat() == other.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
    if (this->toFloat() != other.toFloat())
        return (true);
    else
        return (false);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    this->_fixed_value = other.getRawBits();
    return (*this);
}

Fixed& Fixed::operator++(void)
{
    this->_fixed_value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++this->_fixed_value;
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    this->_fixed_value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --this->_fixed_value;
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &other)
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
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
