/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:09:34 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 16:23:17 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void printSubHeader(std::string title)
{
	std::cout << YELLOW << "--- " << title << " ---" << RESET << std::endl;
}

int	main(void)
{
	// printSubHeader("init 'me'");
	// ICharacter	*me = new Character("me");

	// printSubHeader("init new ice");
	// AMateria* tmp = new Ice();

	// printSubHeader("'me' equipping ice");
	// me->equip(tmp);

	// printSubHeader("init 'bob'");
	// ICharacter* bob = new Character("bob");

	// printSubHeader("'me' attacking 'bob'");
	// me->use(0, *bob);

	// printSubHeader("'me' removing ice");
	// me->unequip(0);
	// delete tmp;

	// printSubHeader("'me' equipping 4 spells");
	// me->equip(new Cure());
	// me->equip(new Ice());
	// me->equip(new Cure());
	// me->equip(new Ice());

	// printSubHeader("'me' trying to equip another spell");
	// tmp = new Cure();
	// me->equip(tmp);

	// printSubHeader("'me' using all spells in inventory");
	// for (int i = 0; i < 4; i++)
	// 	me->use(i, *bob);

	// printSubHeader("deleting extra spell");
	// delete tmp;

	// printSubHeader("deleting 'bob'");
	// delete bob;

	// printSubHeader("deleting 'me'");
	// delete me;

	// printSubHeader("end");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}
