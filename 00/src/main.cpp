/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/03 23:22:47 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

int	main(void)
{
	Animal	meta;

	std::cout << meta << std::endl;
	std::cout << meta.getType() << std::endl;
	meta.makeSound();
}
