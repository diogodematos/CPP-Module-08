/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:46:15 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/12 15:36:23 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <deque>

template <typename T> class MutantStack : public std::stack<T>
{
    
    public:

        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &mutantstack);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"

#endif