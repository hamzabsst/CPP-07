/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:44:06 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/16 19:32:59 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

	Array<int> numbers(5);
	std::cout << "Numbers array size: " << numbers.size() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = i;
	}
	for (unsigned int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ' ';
	}
	std::cout << std::endl;

	try
	{
		std::cout << "Trying to access index -2" << std::endl;
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: accessing negative index" << std::endl;
	}
	return 0;
}
