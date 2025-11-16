/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:22:24 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/16 18:40:19 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T, typename F>
void	iter(T *array, const int len, F function)
{
	if (array == NULL || function == NULL)
		return ;

	for (int i = 0; i < len; i++)
		function(array[i]);
}
