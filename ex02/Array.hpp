/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:26:25 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/15 17:59:00 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iomanip>
# include <iostream>
# include <stdexcept>
# include <cmath>

template <typename T>
class Array {
    private : 
        T* _arr;
        unsigned int _size;
        
    public :
        class ArraySizeWrong : public std::exception {
            public : 
                const char* what() const throw();
        } ;
        
        class IndexOutOfBounds : public std::exception {
           public :
                const char* what() const throw (); 
        } ;
        
        Array () ;
        Array (unsigned int n) ;
        Array (const Array& other) ;     
        Array&  operator=(const Array& other) ;
        ~Array () ;
            
        T& operator[] (unsigned int index) ;
        const T& operator[] (unsigned int index)  const ; 
        unsigned int size() const ;
}; 


# include "Array.tpp"