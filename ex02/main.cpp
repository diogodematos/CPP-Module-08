/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:01:53 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/12 15:56:24 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <list>

int main() 
{
    std::cout << "\nStacks:" << std::endl;
    MutantStack<int> mstack1;
    mstack1.push(5);
    mstack1.push(17);
    std::cout << mstack1.top() << std::endl;
    mstack1.pop();
    std::cout << mstack1.size() << std::endl;
    mstack1.push(3);
    mstack1.push(5);
    mstack1.push(737);
    //[...]
    mstack1.push(0);
    MutantStack<int>::iterator it1 = mstack1.begin();
    MutantStack<int>::iterator ite1 = mstack1.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1<< std::endl;
        ++it1;
    }

    std::cout << "\nLists:" << std::endl;
    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl; // Deve imprimir 17

    mstack.pop_back();
    std::cout << mstack.size() << std::endl; // Deve imprimir 1

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);

    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
        
    return 0;
}