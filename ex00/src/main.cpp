/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 12:35:05 by vpoka            ###   ########.fr       */
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
	std::cout << "ANIMAL" << std::endl;
	printSeperator("▾");
	Animal	meta;
	printSeperator("-");
	std::cout << meta.getType() << std::endl;
	meta.makeSound();
	std::cout << meta << std::endl;
	
	std::cout << std::endl;

	std::cout << "CAT" << std::endl;
	printSeperator("▾");
	Cat cat;
	printSeperator("-");
	std::cout << cat.getType() << std::endl;
	cat.makeSound();
	std::cout << cat << std::endl;

	std::cout << std::endl;

	std::cout << "ANIMAL_CAT" << std::endl;
	printSeperator("▾");
	Animal *animal_cat = new Cat();
	printSeperator("-");
	std::cout << animal_cat->getType() << std::endl;
	animal_cat->makeSound();
	std::cout << *animal_cat << std::endl;

	std::cout << std::endl;

	std::cout << "DOG" << std::endl;
	printSeperator("▾");
	Dog dog;
	printSeperator("-");
	std::cout << dog.getType() << std::endl;
	dog.makeSound();
	std::cout << dog << std::endl;
	
	std::cout << std::endl;

	std::cout << "WRONG_ANIMAL" << std::endl;
	printSeperator("▾");
	WrongAnimal w_meta;
	printSeperator("-");
	std::cout << w_meta.getType() << std::endl;
	w_meta.makeSound();
	std::cout << w_meta << std::endl;
	
	std::cout << std::endl;

	std::cout << "WRONG_CAT" << std::endl;
	printSeperator("▾");
	WrongCat w_cat;
	printSeperator("-");
	std::cout << w_cat.getType() << std::endl;
	w_cat.makeSound();
	std::cout << w_cat << std::endl;

	std::cout << std::endl;

	std::cout << "WRONG_ANIMAL_CAT" << std::endl;
	printSeperator("▾");
	WrongAnimal *w_animal_cat = new WrongCat();
	printSeperator("-");
	std::cout << w_animal_cat->getType() << std::endl;
	w_animal_cat->makeSound();
	std::cout << *w_animal_cat << std::endl;

	printSeperator("_");
}
