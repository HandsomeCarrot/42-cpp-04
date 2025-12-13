/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 19:04:25 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

static void	printSeperator(const std::string &c)
{
	int	width;

	width = 30;
	while (width > 0)
	{
		std::cout << c;
		width--;
	}
	std::cout << std::endl;
}

int	main(void)
{
	int	array_size = 5;

	Animal	**animals = new Animal*[array_size];
	for (int i = 0; i < array_size; i++)
	{
		animals[i] = new Cat();
	}

	printSeperator("_");

	for (int i = 0; i < array_size; i++)
		delete animals[i];
	delete [] animals;

	printSeperator("_");
}
