/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:26:14 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/15 19:32:32 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

template <typename T>
Array<T>::Array () : _arr (NULL), _size(0) {} 

template <typename T>
Array<T>::Array (unsigned int n) : _size(n) {
   _arr = (n > 0) ? (new T[n]()) : NULL;
}

template <typename T>
Array<T>::Array (const Array& other) : _size(other._size) {
    _arr = (_size > 0) ? new T[_size] : NULL;
    for (unsigned int i = 0; i < _size; i++)
        _arr[i] = other._arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete [] _arr;
        _size = other._size; 
        _arr = (_size > 0) ? new T[_size] : NULL;
        for (unsigned int i = 0; i < _size; i++) {
            _arr[i] = other._arr[i] ;
        }
    }
    return *this;
}

template <typename T> 
Array<T>::~Array () {
    delete [] _arr;
}

template <typename T>
T& Array<T>::operator[] (unsigned int index) {
    if(_size == 0 || index >= _size) 
        throw IndexOutOfBounds () ;
    return _arr[index];
}

template <typename T>
const T& Array<T>::operator[] (unsigned int index) const {
   if(_size == 0 || index >= _size)  
        throw IndexOutOfBounds () ;
    return _arr[index];
} 

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template <typename T>
const char* Array<T>::IndexOutOfBounds::what() const throw () {
    return "Index out of bounds.";
}

template <typename T>
const char* Array<T>::ArraySizeWrong::what() const throw () {
    return "Array size must be over 0.";
}
