/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:57:51 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/10 19:29:07 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main(void)
// {
//     Fixed a(10);
//     Fixed b(3.5f);
//     Fixed c(10);

//     std::cout << "===== COMPARAISONS =====" << std::endl;
//     std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

//     std::cout << "a > b  : " << (a > b) << std::endl;
//     std::cout << "a < b  : " << (a < b) << std::endl;
//     std::cout << "a >= c : " << (a >= c) << std::endl;
//     std::cout << "a <= c : " << (a <= c) << std::endl;
//     std::cout << "a == c : " << (a == c) << std::endl;
//     std::cout << "a != b : " << (a != b) << std::endl;

//     std::cout << "\n===== ARITHMETIQUE =====" << std::endl;

//     Fixed add = a + b;
//     Fixed sub = a - b;
//     Fixed mul = a * b;
//     Fixed div = a / b;

//     std::cout << "a + b = " << add << std::endl;
//     std::cout << "a - b = " << sub << std::endl;
//     std::cout << "a * b = " << mul << std::endl;
//     std::cout << "a / b = " << div << std::endl;

//     std::cout << "\n===== INCREMENT / DECREMENT =====" << std::endl;

//     Fixed x(1);

//     std::cout << "x       = " << x << std::endl;
//     std::cout << "++x     = " << ++x << std::endl;
//     std::cout << "x       = " << x << std::endl;
//     std::cout << "x++     = " << x++ << std::endl;
//     std::cout << "x       = " << x << std::endl;
//     std::cout << "--x     = " << --x << std::endl;
//     std::cout << "x--     = " << x-- << std::endl;
//     std::cout << "x       = " << x << std::endl;

//     std::cout << "\n===== MIN / MAX =====" << std::endl;

//     std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
//     std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;

//     const Fixed d(42.42f);
//     const Fixed e(21.21f);

//     std::cout << "min(d, e) = " << Fixed::min(d, e) << std::endl;
//     std::cout << "max(d, e) = " << Fixed::max(d, e) << std::endl;

//     return 0;
// }

int main(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}
