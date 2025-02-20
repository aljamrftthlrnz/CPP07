/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:54:15 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/14 17:11:26 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iomanip>
# include <iostream>

template <typename T> 
void iter (T *arr, size_t len, void (*func)(T&)) {
    for (size_t i = 0; i < len; i++) {
        func (arr[i]);
    }
}

template <typename T> 
void iter (const T *arr, size_t len, void (*func)(const T&)) {
    for (size_t i = 0; i < len; i++) {
        func (arr[i]);
    }
}

template <typename T>
void print (const T& x) {
    std::cout << x << " ";
}

template <typename T>
void doubleVal (T& x) {
    x *= 2;
    std::cout << x << " ";
}
