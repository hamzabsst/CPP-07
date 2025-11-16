/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:22:11 by hbousset          #+#    #+#             */
/*   Updated: 2025/11/16 18:41:20 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	to_upper(char &c)
{
	c = c - 32;
}

void	cprint(char name)
{
	std::cout << name;
}

void	iprint(int i)
{
	std::cout << i << std::endl;
}

int main(void)
{
	char a[] = "hamza";
	::iter(a, 5, to_upper);
	std::cout << a << std::endl;

	::iter("hamza is trying\n", 16, cprint);

	int b[2];
	b[0] = 0;
	b[1] = 1;

	::iter(b, 2, iprint);
	return 0;
}
