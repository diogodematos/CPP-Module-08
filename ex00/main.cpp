/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:02:52 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/11 14:12:41 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    std::vector<int> tab;
    //fill(tab.begin(), tab.end(), 4);
    for (int i=0; i < 8; i++)
        tab.push_back(std::rand() % 10);
    for (int i=0; static_cast<unsigned long>(i)<tab.size(); i++)
        std::cout << tab[i] << " \n";
    // tab.push_back(10);
    // tab.push_back(11);
    // tab.push_back(12);
    // tab.push_back(13);
    // tab.push_back(14);
    
    try
    {
        easyfind(tab, 5);
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << e.what() << std::endl;
    }
}