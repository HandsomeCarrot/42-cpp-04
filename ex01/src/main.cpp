/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 21:10:00 by vpoka            ###   ########.fr       */
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

void printHeader(std::string title)
{
	printSeperator("=", 30, GREEN);
	std::cout << YELLOW << title << RESET << std::endl;
	printSeperator("=", 30, GREEN);
}

int	main(void)
{
	printHeader("Array of Animals");

	int arraySize = 4;
	Animal* animals[arraySize];

	// Create Animals
	for (int i = 0; i < arraySize; i++) {
		if (i < arraySize / 2) {
			std::cout << BLUE << "[Creating Dog " << i << "]" << RESET << std::endl;
			animals[i] = new Dog();
		} else {
			std::cout << GREEN << "[Creating Cat " << i << "]" << RESET << std::endl;
			animals[i] = new Cat();
		}
	}

	std::cout << std::endl;

	// Print animal sounds
	std::cout << YELLOW << "--- Testing Polymorphic Sounds ---" << RESET << std::endl;
	for (int i = 0; i < arraySize; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	// Delete Animals
	std::cout << YELLOW << "--- Deleting Animals ---" << RESET << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << RED << "[Deleting Animal " << i << "]" << RESET << std::endl;
		delete animals[i];
	}
	
	std::cout << std::endl;

	// Deep Copy Test
	printHeader("Deep Copy Test");

	std::cout << "1. Creating original Dog..." << std::endl;
	Dog* originalDog = new Dog();
	// Assuming Brain implementation allows setting ideas, you would set one here to test deep copy.
	// originalDog->getBrain()->setIdea(0, "Chase ball");

	std::cout << "2. Creating copy Dog (using copy constructor)..." << std::endl;
	Dog* copyDog = new Dog(*originalDog);

	std::cout << "3. Deleting original Dog..." << std::endl;
	delete originalDog;

	std::cout << "4. Testing copy Dog (should still be valid)..." << std::endl;
	copyDog->makeSound(); // Should still work if deep copy succeeded
	// std::cout << copyDog->getBrain()->getIdea(0) << std::endl; // Should still be "Chase ball"

	std::cout << "5. Deleting copy Dog..." << std::endl;
	delete copyDog;
}
