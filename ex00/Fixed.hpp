/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:16:43 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 15:02:47 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
    int fixed_value;
    static const int fract_bits = 8;
    
    public:
    
    Fixed(int nbr)
    {
        nbr = 0;
    }
};

#endif