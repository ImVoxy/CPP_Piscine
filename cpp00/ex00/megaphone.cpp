/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:08:27 by alpascal          #+#    #+#             */
/*   Updated: 2021/12/26 17:23:36 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; ++i)
		for (int j = 0; av[i][j]; ++j)
			std::cout << (char)toupper(av[i][j]);
	std::cout << std::endl;
	return (0);
}