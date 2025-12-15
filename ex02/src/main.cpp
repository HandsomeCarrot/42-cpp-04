/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 22:03:57 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void printHeader(std::string title)
{
	std::cout << CYAN << "======== " << title << " ========" << RESET << std::endl;
}

void printSubHeader(std::string title)
{
	std::cout << YELLOW << "--- " << title << " ---" << RESET << std::endl;
}

int	main(void)
{
	// The line below won't work anymore, as the animal class is pure virtual and can not exist on its own.
	// Animal	a;
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
	printSubHeader("Testing Polymorphic Sounds");
	for (int i = 0; i < arraySize; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	// Delete Animals
	printSubHeader("Deleting Animals");
	for (int i = 0; i < arraySize; i++) {
		std::cout << RED << "[Deleting Animal " << i << "]" << RESET << std::endl;
		delete animals[i];
	}
	
	std::cout << std::endl;

	// Deep Copy Test
	printHeader("Deep Copy Test");

	printSubHeader("Creating original Dog");
	Dog* originalDog = new Dog();
	originalDog->getBrain()->setIdea(0, "Chase ball");

	printSubHeader("Creating copy Dog");
	Dog* copyDog = new Dog(*originalDog);

	printSubHeader("Deleting original Dog");
	delete originalDog;

	printSubHeader("Testing copy Dog");
	copyDog->makeSound();
	std::cout << copyDog->getBrain()->getIdea(0) << std::endl;

	printSubHeader("Deleting copy Dog");
	delete copyDog;
}
