/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:39:06 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/11 13:02:57 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _Size(0)
{
    std::cout << "Span Created with " << _N << " numbers!" << std::endl;
}

Span::Span(const Span &copy)
{
    *this = copy;
    std::cout << "Copy Span created with " << _N << " numbers!" << std::endl;
}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
    {
        _N = span._N;
        _Size = span._N;
    }
    return *this;
}

Span::~Span()
{
    std::cout << "Span with " << _N << " destroyed!" << std::endl;
}

void Span::addnumber(int n)
{
    try
    {
        if (_Size != _N)
        {
            _Span.push_back(n);
            _Size++;
        }
        else
            throw std::out_of_range("Span Full!")
    }
    catch (std::exception &e)
    {
        
    }
        
        
}