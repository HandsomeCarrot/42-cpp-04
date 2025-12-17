/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:09:34 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 18:53:13 by vpoka            ###   ########.fr       */
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

void testStandard(void)
{
	printHeader("Standard Test");

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
}

void testDeepCopy(void)
{
	printHeader("Deep Copy Test");
		
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* original = new Character("Original");
	AMateria* tmp = src->createMateria("ice");
	original->equip(tmp);

	Character* copy = new Character(*original);

	std::cout << "Original name: " << original->getName() << std::endl;
	std::cout << "Copy name: " << copy->getName() << std::endl;

	tmp = src->createMateria("cure");
	copy->equip(tmp);

	ICharacter* target = new Character("Target");

	printSubHeader("Original State");
	original->use(0, *target);
	original->use(1, *target); // Should be empty

	printSubHeader("Copy State");
	copy->use(0, *target);
	copy->use(1, *target); // Should be Cure

	delete original;
	delete copy;
	delete target;
	delete src;
}

void testInventoryFull(void)
{
	printHeader("Inventory Full Test");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* hoarder = new Character("Hoarder");
	for (int i = 0; i < 4; i++)
		hoarder->equip(src->createMateria("ice"));

	printSubHeader("Equipping 5th Materias");
	AMateria* extra = src->createMateria("cure");
	hoarder->equip(extra);

	ICharacter* nobody = new Character("nobody");

	printSubHeader("Using all Materias");
	for (int i = 0; i < 4; i++)
		hoarder->use(i, *nobody);

	delete extra;
	delete hoarder;
	delete src;
}

void testUnequip(void)
{
	printHeader("Unequip Test");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	ICharacter* clumsy = new Character("Clumsy");
	AMateria* tmp = src->createMateria("ice");
	clumsy->equip(tmp);

	ICharacter* target = new Character("Target");

	printSubHeader("Use Before Unequip");
	clumsy->use(0, *target);

	printSubHeader("Unequiping Slot 0");
	clumsy->unequip(0); // Leaks if we don't hold tmp

	printSubHeader("Use After Unequip (Should do nothing)");
	clumsy->use(0, *target);

	delete tmp; // Manual cleanup of unequipped item
	delete clumsy;
	delete target;
	delete src;
}

int	main(void)
{
	testStandard();
	testDeepCopy();
	testInventoryFull();
	testUnequip();

	return (0);
}
