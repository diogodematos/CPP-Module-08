/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:52:25 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/11 14:16:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <vector>
#include <algorithm> 

template <typename T> void easyfind(T tab, int i)
{
    std::vector<int>::iterator it;
    it = std::find(tab.begin(), tab.end(), i);
    //std::cout << "distancia: " << distance(tab.begin(), it) << std::endl;
    if (it != tab.end()) 
    {
    std::cout << "Element " << i << " found at position : ";
    std::cout << distance(tab.begin(), it) << std::endl;
    }
    else
        throw std::out_of_range("Don't found!");
    return ;
}

#endif