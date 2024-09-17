/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:46:09 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/17 19:18:24 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(-16);
//     sp.addNumber(3);
//     sp.addNumber(-17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     for (int i=0; static_cast<unsigned long>(i)<sp.getSize(); i++)
//         std::cout << sp.getSpan()[i] << " \n";
//     std::cout << "Short Distance: " << sp.shortestSpan() << std::endl;
//     std::cout << "Long Distance: " << sp.longestSpan() << std::endl;
//     return 0;
// }

int main()
{
    Span sp = Span(5);
    sp.addNNumber(6);
    for (int i=0; static_cast<unsigned long>(i)<sp.getSize(); i++)
        std::cout << sp.getSpan()[i] << " \n";
    std::cout << "Short Distance: " << sp.shortestSpan() << std::endl;
    std::cout << "Long Distance: " << sp.longestSpan() << std::endl;
    return 0;
}
