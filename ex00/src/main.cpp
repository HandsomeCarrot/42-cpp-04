/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 22:53:45 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

template <typename T>
void testAnimal(const std::string& name, const T* animal)
{
	std::cout << "----------" << std::endl;
	std::cout << YELLOW << "[" << name << "]" << RESET << std::endl;
	std::cout << MAGENTA << "  Type:  " << RESET << animal->getType() << std::endl;
	std::cout << MAGENTA << "  Sound: " << RESET;
	animal->makeSound();
	std::cout << "----------" << std::endl;
	delete animal;
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << CYAN << "=== Standard Tests ===" << RESET << std::endl << std::endl;
	testAnimal("Animal", new Animal());
	testAnimal("Dog", new Dog());
	testAnimal("Cat", new Cat());

	std::cout << CYAN << "=== WrongAnimal Tests ===" << RESET << std::endl << std::endl;
	testAnimal("WrongAnimal", new WrongAnimal());
	testAnimal("WrongCat", new WrongCat());

	return 0;
}
