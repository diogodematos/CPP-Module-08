/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:39:06 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/17 19:24:59 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _Size(0), _max(0)
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

void Span::addNumber(int n)
{
    try
    {
        if (_Size != _N)
        {
            _Span.push_back(n);
            _Size++;
        }
        else
            throw std::out_of_range("Span Full!");
    }
    catch (std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Span::addNNumber(unsigned int n)
{
    srand(static_cast<unsigned int>(time(0)));
    for(unsigned int i = 0; i != n; i++)
    {
        try
        {
            if (_Size != _N)
            {
                _Span.push_back(rand() % 20000);
                _Size++;
            }
            else
                throw std::out_of_range("Span Full!");
        }
        catch (std::out_of_range &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

int Span::shortestSpan()
{
    try
    {
        if (_Size > 1)
        {
            _min = _Span[0] - _Span[1];
            if (_min < 0)
                _min *= -1;
            for (unsigned int i = 0; i < _Size - 1; i++)
                for (unsigned int k = i + 1; k < _Size; k++)
                {
                    int d = (_Span[i] - _Span[k]);
                    if (d < 0)
                        d *= -1;
                    if (d < _min)
                        _min = d;  
                }
        }
        else
            throw std::out_of_range("Need 2 numbers in Span!");
    }
    catch (std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }
    return _min;
}

int Span::longestSpan()
{
    try
    {
        if (_Size > 1)
        {
            _max = _Span[0] - _Span[1];
            if (_max < 0)
                _max *= -1;
            for (unsigned int i = 0; i < _Size - 1; i++)
                for (unsigned int k = i + 1; k < _Size; k++)
                {
                    int d = (_Span[i] - _Span[k]);
                    if (d < 0)
                        d *= -1;
                    if (d > _max)
                        _max = d;  
                }
        }
        else
            throw std::out_of_range("Need 2 numbers in Span!");
    }
    catch (std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }
    return _max;
}

unsigned int Span::getSize()
{
    return (_Size);
}

unsigned int Span::getN()
{
    return (_N);
}

std::vector<int> Span::getSpan()
{
    return (_Span);
}