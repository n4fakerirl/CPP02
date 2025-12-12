/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:17:09 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 14:58:53 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main(void)
// {
//     Fixed a;
//     Fixed b(a);
//     Fixed c;
//     c = b;
//     std::cout << a.getRawBits() << std::endl;
//     std::cout << b.getRawBits() << std::endl;
//     std::cout << c.getRawBits() << std::endl;
//     return (0);
// }

int main(void)
{
    Fixed a;
    Fixed b(a);
    
    std::cout << a.fixed_value;
    std::cout << b.fixed_value;
}
