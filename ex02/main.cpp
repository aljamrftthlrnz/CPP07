/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:25:41 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/15 19:39:50 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
#include <iostream>

int main() {
    try {

        Array<int> arr(3);
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;

        std::cout << "Array elements: ";
        for (unsigned int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        
        const Array<int> arr2(5);  
        std::cout << "Const Array elements: ";
        std::cout << "'" << arr2[4] << "'"; 
        std::cout << std::endl;

        Array<int> copy = arr;
        copy[0] = 100;
        std::cout << "Original[0]: " << &arr[0] << ", Copy[0]: " << &copy[0] << std::endl;
        std::cout << "Original[0]: " << arr[0] << ", Copy[0]: " << copy[0] << std::endl;


        std::cout << "Accessing out-of-bounds index..." << std::endl;
        std::cout << arr[10] << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
