/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:57:30 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/12 15:38:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>MutantStack<T>::MutantStack()
{
    //std::cout << "MutantStack Created" << std::endl;
}

template <typename T>MutantStack<T>::MutantStack(const MutantStack &copy)
{
    (void)copy;
    //std::cout << "Copy MutantStack Created" << std::endl;
}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &mutantstack)
{
    //std::cout << "Copy Operator Called" << std::endl;
    (void)mutantstack;
    return *this;
}

template<typename T>MutantStack<T>::~MutantStack()
{
    //std::cout << "MutantStack Destroyed" << std::endl;
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}