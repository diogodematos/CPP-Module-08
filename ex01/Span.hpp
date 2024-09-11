/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:21:23 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/11 12:57:20 by dcarrilh         ###   ########.fr       */
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

    public:

        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &span);
        ~Span();

        void addnumber(int n);
        int shortestSpan();
        int longestSpan();
        
};

#endif