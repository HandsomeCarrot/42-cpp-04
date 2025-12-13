/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 23:29:07 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

static void	printSeperator(const std::string &c, int width)
{
	while (width > 0)
	{
		std::cout << c;
		width--;
	}
	std::cout << std::endl;
}

int	main(void)
{
	int	array_size = 4;

	Animal	**animals = new Animal*[array_size];
	for (int i = 0; i < array_size; i++)
	{
		printSeperator("-", 30);
		if (i < array_size / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();

		printSeperator("-", 5);
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < array_size; i++)
	{
		printSeperator("-", 30);
		delete animals[i];
	}
	printSeperator("-", 30);
	delete [] animals;

}
