/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:21:23 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/17 19:22:59 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:

        unsigned int _N;
        unsigned int _Size;
        std::vector<int> _Span;
        int _max;
        int _min;

    public:

        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &span);
        ~Span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        unsigned int getSize();
        unsigned int getN();
        std::vector<int> getSpan();
        void addNNumber(unsigned int n);
        
};

#endif