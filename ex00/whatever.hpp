/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:05:50 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/16 16:18:08 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T & a, T & b )
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const & min( T const & a, T const & b )
{
	return (a < b ? a : b);
}

template <typename T>
T const & max( T const & a, T const & b )
{
	return (a > b ? a : b);
}
