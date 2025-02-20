/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:52:39 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/14 15:23:03 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iomanip>
# include <iostream>

template <typename T>
void swap (T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp; 
}

template <typename T>
const T& min(const T& a, const T& b) {
    return ( a < b ) ? a : b ;
}

template <typename T>
const T& max(const T& a, const T& b) {
    return ( a > b ) ? a : b ;
}
