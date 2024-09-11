/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:46:15 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/11 16:03:57 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

template <class T> class MutantStack : public std::stack
{
    private:



    public:

        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &mutantstack);
        ~MutantStack();
}

#endif