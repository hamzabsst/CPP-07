/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:44:16 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/16 19:48:44 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array& operator=(const Array &other);
		~Array();

		T& operator[](unsigned int index);
		unsigned int size() const;
	class OutOfBounds : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#include "Array.tpp"
