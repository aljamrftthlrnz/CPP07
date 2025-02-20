/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:24:50 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/15 19:20:39 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    const int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3};
    std::string stringArray[] = {"Hello", "World", "C++"};

    std::cout << "Integers: ";
    iter (intArray, 5, print<int>);
    
    std::cout << "\nDouble: ";
    iter(doubleArray, 3, doubleVal<double>);
    
    std::cout << "\nStrings: ";
    iter (stringArray, 3, print<std::string>);
    std::cout << std::endl;
    return 0;
}
