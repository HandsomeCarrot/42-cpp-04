/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 00:08:46 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

static void	printSeperator(const std::string &c, int width, const char *color)
{
	if (width <= 0)
		width = 30;

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
	std::cout << GREEN"ANIMAL" << std::endl;
	printSeperator("▾", 20, BLUE);
	Animal	meta;
	printSeperator("-", 0, YELLOW);
	std::cout << meta.getType() << std::endl;
	meta.makeSound();
	std::cout << meta << std::endl;
	
	std::cout << std::endl;

	std::cout << GREEN"CAT" << std::endl;
	printSeperator("▾", 20, BLUE);
	Cat cat;
	printSeperator("-", 0, YELLOW);
	std::cout << cat.getType() << std::endl;
	cat.makeSound();
	std::cout << cat << std::endl;

	std::cout << std::endl;

	std::cout << GREEN"ANIMAL_CAT" << std::endl;
	printSeperator("▾", 20, BLUE);
	Animal *animal_cat = new Cat();
	printSeperator("-", 0, YELLOW);
	std::cout << animal_cat->getType() << std::endl;
	animal_cat->makeSound();
	std::cout << *animal_cat << std::endl;

	std::cout << std::endl;

	std::cout << GREEN"DOG" << std::endl;
	printSeperator("▾", 20, BLUE);
	Dog dog;
	printSeperator("-", 0, YELLOW);
	std::cout << dog.getType() << std::endl;
	dog.makeSound();
	std::cout << dog << std::endl;
	
	std::cout << std::endl;

	std::cout << GREEN"WRONG_ANIMAL" << std::endl;
	printSeperator("▾", 20, BLUE);
	WrongAnimal w_meta;
	printSeperator("-", 0, YELLOW);
	std::cout << w_meta.getType() << std::endl;
	w_meta.makeSound();
	std::cout << w_meta << std::endl;
	
	std::cout << std::endl;

	std::cout << GREEN"WRONG_CAT" << std::endl;
	printSeperator("▾", 20, BLUE);
	WrongCat w_cat;
	printSeperator("-", 0, YELLOW);
	std::cout << w_cat.getType() << std::endl;
	w_cat.makeSound();
	std::cout << w_cat << std::endl;

	std::cout << std::endl;

	std::cout << GREEN"WRONG_ANIMAL_CAT" << std::endl;
	printSeperator("▾", 20, BLUE);
	WrongAnimal *w_animal_cat = new WrongCat();
	printSeperator("-", 0, YELLOW);
	std::cout << w_animal_cat->getType() << std::endl;
	w_animal_cat->makeSound();
	std::cout << *w_animal_cat << std::endl;

	printSeperator("_", 0, RED);
	delete animal_cat;
	delete w_animal_cat;
}
