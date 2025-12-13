/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 23:56:51 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

static void	printSeperator(const std::string &c, int width, const char *color)
{
	if (color)
		std::cout << color;
	while (width > 0)
	{
		std::cout << c;
		width--;
	}
	if (color)
		std::cout << RESET;
	std::cout << std::endl;
}

int	main(void)
{
	int	array_size = 4;

	Animal	**animals = new Animal*[array_size];
	for (int i = 0; i < array_size; i++)
	{
		printSeperator("-", 30, GREEN);
		if (i < array_size / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();

		printSeperator("-", 5, YELLOW);
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < array_size; i++)
	{
		printSeperator("-", 30, RED);
		delete animals[i];
	}
	printSeperator("-", 30, RED);
	delete [] animals;
}
