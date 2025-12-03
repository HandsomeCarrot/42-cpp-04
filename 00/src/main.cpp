/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/04 00:57:40 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

static void	printSeperator(char c)
{
	std::cout << std::setfill(c) << std::setw(30) << "" << std::endl;
}

int	main(void)
{
	Animal	meta;
	printSeperator('-');
	std::cout << meta.getType() << std::endl;
	meta.makeSound();
	std::cout << meta << std::endl;
	
	std::cout << std::endl;

	Cat cat;
	printSeperator('-');
	std::cout << cat.getType() << std::endl;
	cat.makeSound();
	std::cout << cat << std::endl;

	printSeperator('_');
}
