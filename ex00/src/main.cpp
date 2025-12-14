/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 19:20:16 by vpoka            ###   ########.fr       */
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

void printHeader(std::string title)
{
	printSeperator("=", 30, GREEN);
	std::cout << YELLOW << title << RESET << std::endl;
	printSeperator("=", 30, GREEN);
}

int	main(void)
{
	// Standard test cases
	printHeader("Standard tests");

	const Animal* animal = new Animal();
	printSeperator("-", 10, NULL);
	std::cout << "Animal Sound: ";
	animal->makeSound();
	printSeperator("-", 10, RED);
	delete animal;
	printSeperator("-", 10, RED);
	std::cout << std::endl;

	const Animal* dog = new Dog();
	printSeperator("-", 10, NULL);
	std::cout << "Dog Type: " << dog->getType() << " " << std::endl;
	printSeperator("-", 5, NULL);
	std::cout << "Sound: ";
	dog->makeSound();
	printSeperator("-", 10, RED);
	delete dog;
	printSeperator("-", 10, RED);
	std::cout << std::endl;

	const Animal* cat = new Cat();
	printSeperator("-", 10, NULL);
	std::cout << "Cat Type: " << cat->getType() << " " << std::endl;
	printSeperator("-", 5, NULL);
	std::cout << "Sound: ";
	cat->makeSound();
	printSeperator("-", 10, RED);
	delete cat;
	printSeperator("-", 10, RED);
	std::cout << std::endl;

	// WrongAnimal test cases
	printHeader("WrongAnimal Test");
	
	const WrongAnimal* wrong_animal = new WrongAnimal();
	printSeperator("-", 10, NULL);
	std::cout << "WrongAnimal Sound: ";
	wrong_animal->makeSound();
	printSeperator("-", 10, RED);
	delete wrong_animal;
	printSeperator("-", 10, RED);
	std::cout << std::endl;

	const WrongAnimal* wrong_cat = new WrongCat();
	printSeperator("-", 10, NULL);
	std::cout << "WrongCat Type: " << wrong_cat->getType() << " " << std::endl;
	printSeperator("-", 5, NULL);
	std::cout << "WrongCat Sound (Should be WrongAnimal sound): ";
	wrong_cat->makeSound();
	printSeperator("-", 10, RED);
	delete wrong_cat;
	printSeperator("-", 10, RED);
}
